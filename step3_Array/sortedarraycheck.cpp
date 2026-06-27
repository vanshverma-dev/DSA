#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array you want to create :";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool sorted=true;
    for(int i=1;i<n;i++){ // the last index in the array is  n-1 and second last element is having n-2th index
        if(arr[i]<arr[i-1]){
            sorted=false;
            break;
        }
    }
    if(sorted==true) cout<<"the array is sorted correctly in non decreasing order"<<endl;
    else cout<<"the array is not sorted correctly here"<<endl;
    return 0;

}