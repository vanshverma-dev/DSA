#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int n ,int arr[]){
    for(int i=n-1;i>=1;i--){
         int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0) {// if the array is sorted it will only run for 1 time and exits the loop time complexity-o(n)
            break;
        }
        cout<<"runs\n"; // if the array is no sorted it will take O(n-square)

    }
}
int main(){
    int n;
    cout<<"enter the size of array you want to create:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(n,arr);
    cout<<"the sorted array ois given by :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0; 
}