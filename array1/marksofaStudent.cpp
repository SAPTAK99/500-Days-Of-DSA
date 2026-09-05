#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of the student : ";
    cin>>x;
    int marks[x];
    for(int i=0;i<x;i++){
        cin>>marks[i];
    }

    for(int i=0;i<=x;i++){
        if(marks[i]<35){
            cout <<"Roll number"<<" "<<i<<" "<<"is failed"<<endl;
        }
    }
}