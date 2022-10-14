#include <iostream>
using namespace std;

int main(void) {
    int pay;
    int price;

    while(price != -1) {
        cout<<"판매 금액을 만원 단위로 입력(-1 to end):";
        cin>>price;
        pay = 50 + price * 0.12;

        if(price != -1) {
            cout<<"이번 달 급여:"<<pay<<"만원"<<endl;
        }
    }
    if(price == -1) {
        cout<<"프로그램을 종료합니다. ";
    }
}