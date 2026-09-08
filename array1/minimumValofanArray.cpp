#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int minValue = arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]<minValue){
            minValue = arr[i];
        }
    }
    cout<<minValue;
}