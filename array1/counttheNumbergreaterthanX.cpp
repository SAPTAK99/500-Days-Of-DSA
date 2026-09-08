#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the size of the array : ";
    cin>>x;
    int arr[x];
    for(int i=0;i<=x-1;i++){
        cin>>arr[i];
    }

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count = 0;
    for(int i=0;i<=x-1;i++){
        if(arr[i]>n){
            count++;
        }
    }
    cout<<count;
}