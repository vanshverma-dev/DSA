#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter the number whose sized array you want to get:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

int hash[13]={0};
for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
}

int q;
cout<<"enter the numbers whose frequency you want to  get checked";
cin>>q;
while(q--){
int number;
cin>>number;
cout<<"the frequency of the given number is given by:"<<hash[number]<<endl;

}
return 0; 
}