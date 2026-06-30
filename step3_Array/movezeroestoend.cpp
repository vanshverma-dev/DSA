
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array you want to declare:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the original array is given by:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]); 
        }
    }
    for(int i=temp.size();i<n;i++){ // here the size of the array is given by non zeroes elements only
        temp.push_back(0);
    }
    cout<<"the new aray in which all the zeroes are in end is given by:";
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" "; 
    }
    return 0;// total TC->O(2N) SC->O(N)

}


