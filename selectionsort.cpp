#include<bits/stdc++.h>
using namespace std;
void selectionsort(int n,int arr[]){
for(int i=0;i<=n-2;i++){
    int mini=i;
    for(int j=i;j<=n-1;j++){
        if(arr[j]<arr[mini]) {
            mini=j; // the minimum index is now stored at mini
        }
    } 
    int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;// without writing three lines we could have used utility library for the built in swap function

}
}
int main(){
int n;
cout<<"enter the size of the array you want to declare: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"the sorted array is given by : "<<endl;
selectionsort(n,arr);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;

}