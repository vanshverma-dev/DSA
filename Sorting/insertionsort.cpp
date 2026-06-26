#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int n,int arr[]){
for(int i=0;i<=n-1;i++){
 int j=i;
while(j>0 && arr[j-1]>arr[j]){ // here j is strictly graeter than zero not equal to zero it will cause error

    int temp=arr[j-1]; // this insertion sort is somewhat like bubble sort with only difference that here we are moving from right to light 
    arr[j-1]=arr[j];
    arr[j]=temp;
    j--;

        }
    }
}

int main(){
    int n;
    cout<<"enter the size of the array you want to create:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    insertion_sort(n,arr);
    cout<<"the sorted is given below :"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
return 0;
}    