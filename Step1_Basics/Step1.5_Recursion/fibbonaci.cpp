#include<bits/stdc++.h>
using namespace std;
int fibbonaci(int n){
    if(n<=1) return n;
    return fibbonaci(n-1)+fibbonaci(n-2); 
}
int main(){
    int n;
    cout<<"enter the n th term upto which fibbonaci you want"<<endl;
    cin>>n;
    cout<<"the nth fibbonaci term is given by:"<<fibbonaci(n)<<endl;
    return 0;
}