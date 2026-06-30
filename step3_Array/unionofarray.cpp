#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"enter the size of the 1st sorted  array :";
    cin>>n1;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"enter the size of the 2nd sorted array :";
    cin>>n2;
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int i=0;// 1st and 2nd pointer being zero here
    int j=0;
    vector<int>unionArr;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0|| unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0|| unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<n2){
         if(unionArr.size()==0|| unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
    }
    while(i<n1){
         if(unionArr.size()==0|| unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
    }
    cout<<"the new sorted array is given by :";
    for(int i=0;i<unionArr.size();i++){
        cout<<unionArr[i]<<" ";
    }

    return 0;

}
