#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the array size : ";
    cin>>x;
    int arr[x];
    for(int i=0;i<=x-1;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<=x-1;i++){
        sum += arr[i];
    }
    cout<<sum;
}