#include<iostream>
using namespace std;

int main(){
    
    // Sum of series 1-2+3-4+5....n

    int len;
    cout<<"Enter length of the series: ";
    cin>>len;

    int sum = 0;

    for(int i = 1; i <= len; i++){
        if(i%2 == 0){
            sum -= i;
        }else{
            sum += i;
        }
    }

    cout<<"Sum of the given series is : "<<sum<<endl;
    return 0;
}