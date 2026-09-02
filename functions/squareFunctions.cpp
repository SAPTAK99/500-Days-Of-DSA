#include<iostream>
using namespace std;

int square(int a){
    return a*a;
}

int main(){
    int a;
    cout<<"Enter the number which will be squared : ";
    cin>>a;
    cout<<square(a);
}