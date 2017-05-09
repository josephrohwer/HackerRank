#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum = (*a + *b);
    int absoDiff = (*b - *a);
    
    if (absoDiff < 0) {
        absoDiff *= -1;
    }
    
    *a = sum;
    *b = absoDiff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf_s("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
