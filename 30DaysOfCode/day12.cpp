#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student : public Person {
private:
	vector<int> testScores;
public:
	/*
	*   Class Constructor
	*
	*   Parameters:
	*   firstName - A string denoting the Person's first name.
	*   lastName - A string denoting the Person's last name.
	*   id - An integer denoting the Person's ID number.
	*   scores - An array of integers denoting the Person's test scores.
	*/
	// Write your constructor here
	Student(string fName, string lName, int iden, vector<int> scores)
		: Person(fName, lName, iden), testScores(scores) 
	{}
	/*
	*   Function Name: calculate
	*   Return: A character denoting the grade.
	*/
	// Write your function here
	char calculate() {
		char grade;
		int total = 0;

		for (unsigned int i = 0; i < testScores.size(); i++) {
			total += testScores[i];
		}

		int average = (total / testScores.size());

		if (average <= 100 && average >= 90) {
			grade = 'O';
		}
		else if (average < 90 && average >= 80) {
			grade = 'E';
		}
		else if (average < 80 && average >= 70) {
			grade = 'A';
		}
		else if (average < 70 && average >= 55) {
			grade = 'P';
		}
		else if (average < 55 && average >= 40) {
			grade = 'D';
		}
		else if (average < 40) {
			grade = 'T';
		}

		return grade;
	}
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	
	return 0;
}