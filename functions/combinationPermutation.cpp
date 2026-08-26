#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}

int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    // int nfact = 1;
    // for(int i=2;i<=n;i++){
    //     nfact *= i;
    // }
    // int rfact =1;
    // for(int i=2;i<=r;i++){
    //     rfact *= i;
    // }
    // int nrfact=1;
    // for(int i=2;i<=n-r;i++){
    //     nrfact *= i;
    // }

    // int combination = nfact/(rfact*nrfact);
    // cout<<combination;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);


    int ncr = nfact/(rfact*nrfact);
    cout<<"The combination of the n and r is "<<ncr<<endl;
    int npr = nfact/nrfact;
    cout<<"The permutation of the n and r is "<<npr;
}