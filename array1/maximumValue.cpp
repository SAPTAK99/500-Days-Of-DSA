#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of array size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int maxVal = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    cout<<"the maximum value of the array is"<<maxVal;
}