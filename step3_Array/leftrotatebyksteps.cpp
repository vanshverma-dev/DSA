#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array you want to declare:";
    cin>>n;
    int arr[n];
     cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"the original array is given by:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int d;
    cout<<"\nenter the steps by which we left rotate the array:";
    cin>>d;
    // for handling cases where d>=n safely
    d=d%n;
     // creating a small array to store elements that will get overwritten
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
        
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
// storing the rest elements(STORED IN TEMP )
for(int i=0;i<d;i++){
    arr[n-d+i]=temp[i];
}
// the rotated array is given by:
cout<<"the rotated array is given by:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    // tc-> O(n+d) sc-O(d) only{ this is extra sapce used}
   
}