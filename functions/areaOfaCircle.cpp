#include<iostream> 
using namespace std;

float area(float x){
    return 3.14*x*x;
}


int main(){
    float r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<area(r);
}