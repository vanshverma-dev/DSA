#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i]; // this has time complexity of o(2n)=o(n)  but this is a double pass not a single pass
        }
    }

cout<<"the largest element is given by:"<<largest<<endl;
cout<<"the secondlargest element is given by:"<<slargest<<endl;
cout<<endl;

}