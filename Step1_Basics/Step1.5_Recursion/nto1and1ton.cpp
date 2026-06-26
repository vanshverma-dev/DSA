#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n<=0) return;
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
    return;
}
int main(){
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
cout<<"the numbers from n to 1 and 1 to n given by:"<<endl;
fun(n);
}