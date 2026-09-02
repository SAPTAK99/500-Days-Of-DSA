#include<iostream>
using namespace std;

void oddNumber(int x,int y){
    for(int i=x;i<=y;i++){
        if(i%2!=0){
            cout<<i<<", ";
        }
    }
}


int main(){
    int x,y;
    cout<<"Enter the First Number : ";
    cin>>x;
    cout<<"Enter the 2nd Number : ";
    cin>>y;
    oddNumber(x,y);
}