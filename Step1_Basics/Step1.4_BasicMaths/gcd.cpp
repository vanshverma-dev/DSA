#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
      if(a%i==0 && b%i==0){
        gcd=i;
      }
    } 
    cout<<"the gcd of the numbers a and b is given by:"<<gcd<<endl;
    
}