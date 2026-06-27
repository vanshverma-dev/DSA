#include<bits/stdc++.h>
using namespace std;
int removeduplicatesbrute(vector<int>&arr){
int i=0;
int n=arr.size();
for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
    }
 }
 return i+1;
}
int main(){
int n;
cout<<"enter the size of array:";
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int uniquesize=removeduplicatesbrute(arr);
cout<<"the new array after removing duplicates is given below:"<<endl;
for(int i=0;i<uniquesize;i++){
    cout<<arr[i]<<" ";
}

cout<<"the number of unique elements is given by:"<<uniquesize<<endl;
return 0;
}