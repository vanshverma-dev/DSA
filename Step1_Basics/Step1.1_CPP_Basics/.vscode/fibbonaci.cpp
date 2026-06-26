#include<iostream>
using namespace std;
int  fibbonaci(int n){
if (n==0) return 0;
if (n==1) return 1;
return fibbonaci(n-1)+fibbonaci(n-2);
}
int main(){
    int n;
cout<<"enter the values of n"<<endl;
cin>>n;
cout<<"the nth fibbonaci term is given by:"<<fibbonaci(n);
return 0;
}