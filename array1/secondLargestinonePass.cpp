#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int maxValue = INT_MIN;
    int secondmaxValue = INT_MIN;
    for(int i=0;i<=n-1;i++){
    if(arr[i]>maxValue){
        secondmaxValue = maxValue;   // save the OLD maxValue here first
        maxValue = arr[i];
    }
    else if(arr[i]>secondmaxValue && arr[i]!=maxValue){
        secondmaxValue = arr[i];
    }
}
    cout<<secondmaxValue;
}