#include<iostream>
using namespace std;

int hcf(int x,int y){
    int gcd = 1;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            gcd = i;
        }
    }
    return gcd;
}


int main(){
    int x;
    cout<<"Enter the 1st number : ";
    cin>>x;
    int y;
    cout<<"Enter the 2nd number : ";
    cin>>y;
    cout<<hcf(x,y);
}