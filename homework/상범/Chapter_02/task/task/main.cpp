//
//  main.cpp
//  task
//
//  Created by 김상범 on 2022/10/12.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


void swap_by_ref(int &val1,int &val2){ // 참조자를 이용한 call by ref
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

int &reffunc(int &x){
    x ++;
    return x;
}

char *MakestrAdr(int len){
    char *str = (char*)malloc(sizeof (char)*len);
    return str;
}



int main(int argc, const char * argv[]) {
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;
    
    
    int &ref = num; // ref-> num 참조
    int *(&pref) = ptr;
    int **(&dpref) = dptr;
    
    cout <<ref <<endl;
    cout <<*pref <<endl;
    cout <<**dpref <<endl;
    
    
    int x = 10;
    int y = 20;
    cout << "swap 이전 " <<x << " " << y << endl;
    swap_by_ref(x, y);
    cout << "swap 이후 "<<x<< " "<< y <<endl;
    
    
    
    int a = 3;
    int &ref_1 = a;
    int &ref_2 = ref_1;
    cout << ref_2 << endl;
    
    
    int num1 = 1;
    int &num2 = reffunc(x); //참조자(함수)를 참조
    
    num1++;
    num2++;
    
    cout << "num1: " << num1 << endl;
    
    
    char *str = MakestrAdr(20);
    strcpy(str, "I Love you");
    cout << str << endl;
    free(str);
    
    
}
