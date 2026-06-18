#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
int main(){
int n;
cout<<"enter the value of n upto which sum you want to see"<<endl;
cin>>n;
cout<<"the sum of the first n numbers is given by:"<<sum(n)<<endl;
return 0;
}