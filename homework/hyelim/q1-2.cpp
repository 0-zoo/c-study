#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int p;
    p = *x;
    *x=*y;
    *y=p;
}

void swap(char *x, char *y) {
    char p;
    p=*x;
    *x=*y;
    *y=p;
}

void swap(double *x, double *y) {
    double p;
    p=*x;
    *x=*y;
    *y=p;
}

int main(void) {
    int num1=20, num2=30;
    swap(&num1, &num2);
    cout<<num1<<' '<<num2<<endl;

    char ch1='A', ch2='Z';
    swap(&ch1, &ch2);
    cout<<ch1<<' '<<ch2<<endl;

    double dbl1=1.111, dbl2=5.555;
    swap(&dbl1, &dbl2);
    cout<<dbl1<<' '<<dbl2<<endl;
    return 0;
}