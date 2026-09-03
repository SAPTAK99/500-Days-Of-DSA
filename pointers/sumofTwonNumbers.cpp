#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter your First Number : ";
    cin>>x;
    cout<<"Enter Your Second Number : ";
    cin>>y;

    int *a=&x;
    int *b=&y;

    cout<< *a+*b;
}