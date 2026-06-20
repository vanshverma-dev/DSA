#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]+=1; // we have done the precomputing here as well in a single loop
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
     int q;
     cout<<"enter the number of queries whose answer you want:";
     cin>>q;
     while(q--){
        int number;
        cin>>number;
        cout<<"the frequency of the number is given by :"<<mpp[number]<<endl;
     }
     return 0;

}