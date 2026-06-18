#include<bits/stdc++.h>
using namespace std;
int cnt =1;
void fun(){
    if(cnt==6) return;
   cout<<"vansh"<<endl;
   cnt++;
   fun();
}
int main(){
    cout<<"now my name will be printed 5 times"<<endl;
    fun();
    return 0;
}