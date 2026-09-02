#include<iostream>
using namespace std;

int countDigit(int x){
    if(x == 0) return 1;   // special case: 0 has 1 digit
    int digit = 0;
    while(x != 0){
        x /= 10;
        digit++;
    }
    return digit;
}

int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    cout<<countDigit(x);
}