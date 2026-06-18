#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number n:"<<endl;
    cin>>n;
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0) {cout<<i<<" ";
        if((n/i)!=i) cout<<(n/i)<<" ";// here the numbers are not sorted in the list 
    }
    }
return 0;
}