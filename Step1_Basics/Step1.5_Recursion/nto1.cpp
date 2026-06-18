#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n<=0) return;
    cout<<n<<endl;
    fun(n-1);
    return;
}
int main(){
int n;
cout<<"enter the value of n upto which you want it to print:";
cin>>n;
fun(n);
return 0;
}