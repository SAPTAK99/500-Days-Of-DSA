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
    int x;
    cout<<"Enter the number to search :";
    cin>>x;
    bool found = false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            bool found = true;
            break;
        }
}

        if(found=true){
            cout<<"Element is present in the array.";
        }else{
            cout<<"Element is not present in the array.";
        }
}