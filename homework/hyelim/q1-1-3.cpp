#include <iostream>
using namespace std;

int main(void) {
    int n;

    cout<<"숫자를 입력하세요:";
    cin>>n;

    for(int i=0; i<10; i++) {
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
}