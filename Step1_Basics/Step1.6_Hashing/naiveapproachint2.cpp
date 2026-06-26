#include<bits/stdc++.h>
using namespace std;
int fun(int n,vector<int>v){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==n){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number whose frequency you want to check:"<<endl;
    cin>>n;
    vector<int>v={2,1,3,1,2};
    cout<<"the frquency of the given number in the vector is given by:"<<fun(n, v);
}