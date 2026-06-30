#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ypu want to make :";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the original  array is given by:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int d;
    cout<<"\nenter the steps by which left rotate the array:";
    cin>>d;
    d=d%n;// safegaurd for cases where d>=n
    reverse(arr.begin(),arr.begin()+d);// reverse from 0->d-1
    reverse(arr.begin()+d,arr.end());// reverse from d-> n-1
    reverse(arr.begin(),arr.end());// reverse from 0->n-1

    cout<<"the new array after rotating optimal steps is given by:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;// tc-O(2N) SPACE COMPLEXITY-O(1) no extra space taken here
}