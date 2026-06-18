#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int left,int right){
    if(left>=right) return;// base case
    swap(arr[left],arr[right]);
    reverse(arr,left+1,right-1);
    return;
}
int main(){
    int n;
  cout<<"enter the elements of the arary you wnat to enter"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"the original  array is given by"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
reverse(arr,0,n-1);
cout<<"the reversed array is given by"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}