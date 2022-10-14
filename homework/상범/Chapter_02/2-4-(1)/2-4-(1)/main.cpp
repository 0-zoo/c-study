//
//  main.cpp
//  2-4-(1)
//
//  Created by 김상범 on 2022/10/14.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char s1[10] = "aabcd";
    char s2[10] = "abcd";
    char s3[10];
    
    
    int length = strlen(s1);
    cout << "s1의 길이: " << length <<endl;
    
    strcpy(s3,s2);
    strcat(s1,s2);
    
    cout<< s3 << endl;
    cout << s1 << endl;
    
    if(strcmp(s1,s2) == 1){
        cout << "s1과 s2는 같다" << endl;
    }else{
        cout << "s1과s2는 다르다" << endl;
    }
    
}
