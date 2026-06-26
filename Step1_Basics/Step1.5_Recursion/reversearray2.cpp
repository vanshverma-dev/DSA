#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
    return;
} 
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
     int arr[n];
    cout<<"enter the values off array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the original array values is given by:"<<endl;
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
    reverse(0,arr,5);
    cout<<endl;
 cout<<"the reversed array values is given by:";
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }


}