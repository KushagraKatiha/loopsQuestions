#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int revNum = 0;

    while(num > 0){
        revNum = revNum*10 + num%10;
        num = num/10;
    }

    cout<<"Reversed number is: "<<revNum<<endl;

    return 0;
}