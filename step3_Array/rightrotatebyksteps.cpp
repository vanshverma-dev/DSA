#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array you want to declare:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"the original array is given by:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int d;
    cout<<"enter the no. of steps by which we have to right rotate the array ";
    cin>>d;
    d=d%n;
    reverse(arr.begin(),arr.begin()+n-d); // in left rotate d elements go to back and in right roatate n-d elements go to back
    reverse(arr.begin()+n-d,arr.end());
    reverse(arr.begin(),arr.end());
 cout<<"the new array after right  rotating optimal steps is given by:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;// tc-O(2N) SPACE COMPLEXITY-O(1) no extra space taken here



}

