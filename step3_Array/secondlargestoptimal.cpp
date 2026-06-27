#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array you want to make here:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i]; // just take one pass only
        }
    }
    if(slargest==INT_MIN){
        cout<<"no valid second largest element exist:"<<endl;
    }
    cout<<"the second largest element is given by :"<<slargest;
    cout<<endl;
}