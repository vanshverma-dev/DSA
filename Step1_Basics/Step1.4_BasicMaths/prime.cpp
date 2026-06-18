#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
    bool isPrime=true;
    if(n<=1) cout<<" the given  number is not prime:"<<endl;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"the given no. is prime number"<<endl;
    }
    else{
        cout<<"the given no. is not prime"<<endl;
    }
    return 0;
}