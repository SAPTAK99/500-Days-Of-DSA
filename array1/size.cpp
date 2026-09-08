#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0,22,33,45,6,7,8,9,123,45,6,7,8,9,0,112,3,34,5,56,};
    int n = sizeof(arr)/sizeof(arr[2]);
    cout<<n;
}