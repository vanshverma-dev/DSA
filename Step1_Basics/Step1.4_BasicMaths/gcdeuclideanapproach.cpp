#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    int b;
    cout<<"enter the value of b:";
    cin>>b;
    for(int i=1;i<=min(a,b);i++){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<"the gcd of the following number is given by:"<<b<<endl;
    else cout<<"the gcd of the following number is given by :"<<a<<endl;
    
} 