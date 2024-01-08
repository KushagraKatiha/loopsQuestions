#include<iostream>
using namespace std;

int main(){
    
    int a, b;
    cout<<"Enter a: "; 
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    int result = 1;

    for(int i = 1; i <= b; i++){
        result *= a; 
    }

    cout<<"a^b is: "<<result<<endl;

    return 0;
}