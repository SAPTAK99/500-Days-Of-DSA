#include<iostream>
using namespace std;

int main(){
    int a=90;
    int* p = &a;
    cout<<a<<endl;
    *p = 6;
    cout<<*p;
}