#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int sum = 0;

    while(num > 0){
        sum += num%10;
        num = num/10;
    }

    cout<<"Sum of digits of entered number is "<<sum<<endl;

    return 0;
}