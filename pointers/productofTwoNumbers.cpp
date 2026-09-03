#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int* a=&x;
    int* b=&y;

    int product = (*a * *b);
    cout<<product;
}