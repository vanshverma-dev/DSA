#include<bits/stdc++.h>
using namespace std;
 vector<int>unionArr(vector<int>&arr1,vector<int>&arr2,int n1,int n2){
    int i=0; // here is our first pointer
    int j=0;// this is our second pointer 
    vector<int>unionVec;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionVec.size()==0 || unionVec.back()!=arr1[i]){
                unionVec.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionVec.size()==0 || unionVec.back()!=arr2[j]){
                unionVec.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionVec.size()==0 || unionVec.back()!=arr1[i]){
                unionVec.push_back(arr1[i]);
            }
            i++;
    }
    while(j<n2){
                    if(unionVec.size()==0 || unionVec.back()!=arr2[j]){
                unionVec.push_back(arr2[j]);
            }
            j++;
    }
    return unionVec;
    
}
int main(){
    int n1;
    cout<<"enter the size of the first sorted array here";
    cin>>n1;
    int n2;
    cout<<"enter the size of the second sorted array here:";
    cin>>n2;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
    cin>>arr2[i];
 }
 vector<int>ans=unionArr(arr1,arr2,n1,n2);
 cout<<"the union of the array is given by:"<<endl;
 for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<"  ";
 }
 return 0;
}
// time complexity is o(n1+n2) and space complexity -o(n1+n2)