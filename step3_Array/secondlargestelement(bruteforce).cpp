#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high){
     int pivot=arr[low];
     int i=low;
     int j=high;
     while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }

        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
     }
     swap(arr[low],arr[j]);
     return j;
}

void qs(vector<int>&arr,int low,int high){
if(low<high){
int pIndex=partition(arr,low,high);
qs(arr,low,pIndex-1);
qs(arr,pIndex+1,high);
}

}
int main(){
    int n;
    cout<<"enter the value of n according to which sized array you want:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    qs(arr,0,n-1);
    cout<<"the sorted array is given by:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   int secondlargest;
   for(int i=n-2;i>=0;i--){
    if(arr[n-1]!=arr[i]){
        secondlargest=arr[i];
        break;
    }
   }

   cout<<"the second largest element in the array is given by:"<<secondlargest;
    return 0;
}