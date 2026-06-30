#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arary:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int number;
    bool found=false;
    cout<<"enter the number you want to enter :";
    cin>>number;
    for(int i=0;i<n;i++){
        if(arr[i]==number){
            cout<<"the number is found at index i="<<i;
            found =true;
            break;
        }
    }
    if(found==false) cout<<"the number does not exist in the array :";
cout<<endl;
}