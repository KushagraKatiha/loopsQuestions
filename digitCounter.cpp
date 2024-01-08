#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a random number : ";
    cin>>num;

    int numLen = 0;

    while(num > 0){
        num = num/10;
        numLen++;
    }

    cout<<"Entered number has "<<numLen<<" digits"<<endl;

    return 0;
}