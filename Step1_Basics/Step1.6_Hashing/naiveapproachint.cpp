#include<bits/stdc++.h>
using namespace std;
int fun(int number,int arr[]){
    int count =0;
    for(int i=0;i<5;i++){
        if(arr[i]==number){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number whose frequency you want to check:";
    cin>>n;
    int arr[5]={1,2,3,3,4};
    cout<<"the frequency of the given selected number is given by:"<<fun(n,arr);
    return 0;
    
} 

