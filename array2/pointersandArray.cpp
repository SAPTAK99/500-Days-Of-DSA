#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4};
    int* ptr = arr;
    cout<<ptr<<endl;
    cout<<&arr[0];
}