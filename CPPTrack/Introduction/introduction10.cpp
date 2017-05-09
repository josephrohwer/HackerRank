#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person {
public:
    virtual void getdata() {}
    virtual void putdata() {}
protected:
	int age;
    string name;
};

class Professor : public Person {
public:
	Professor () {
        cur_id = counter;
        counter++;
	}
    
	void getdata() {
        cin >> name >> age >> publications;
	}
    
	void putdata() {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
	}

	int publications;
	int cur_id;
    static int counter;
};

class Student : public Person {
public:
	Student () {
        cur_id = counter;
        counter++;
	}
	
	void getdata() {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
	}
	
	void putdata() {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
	}

	int marks[6];
	int cur_id = 1;
    static int counter;
};

int Student::counter = 1;
int Professor::counter = 1;

int main() {
    int n, val;
    cin>>n; //The number of objects that is going to be created.
	/*VARIABLE LENGTH ARRAY IS NOT STANDARD IN C++!!!*/
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
