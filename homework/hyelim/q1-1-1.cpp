#include <iostream>
using namespace std;

int main(void) {
    int n[0];
    int sum=0;

    for (int i=1; i<6; i++){
        cout<<i<<"번째 정수 입력: ";
        cin>>n[i];
        sum+=n[i];
    }
    
    cout<<"합계: "<<sum<<endl;
    return 0;
}