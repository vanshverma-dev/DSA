#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array you want to declare:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0]; // assumed 1st element to be largest
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<"the largest element of the array is given by:"<<largest; // this is optimal soln of tc-> o(n) and space complexity(auxillary space)-o(1) total space complexity-o(n)
    return 0;
}