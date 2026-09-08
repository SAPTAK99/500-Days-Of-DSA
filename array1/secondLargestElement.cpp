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
    int maxVal = INT_MIN;
    int secmaxVal = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]>secmaxVal && arr[i]!=maxVal){
            secmaxVal=arr[i];
        }
    }
    cout<<"The second largest element is : "<<secmaxVal;
}