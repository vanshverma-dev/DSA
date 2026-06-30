#include<bits/stdc++.h>
using namespace std;
vector<int>intersection(vector<int>&arr1,vector<int>&arr2,int n1,int n2){
    int i=0;
    int j=0;
    vector<int>intersectans;
    
        while(i<n1 && j<n2){
            if(arr1[i]>arr2[j]){
                j++;
            }
            else if( arr2[j]>arr1[i]){
               i++;
            }
            else{
                intersectans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    
    return intersectans;
}
int main(){
        int n1;
    cout<<"enter the size of first sorted array here:";
    cin>>n1;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"enter the size of second sorted array here:";
    cin>>n2;
      vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
vector<int>ans=intersection(arr1,arr2,n1,n2);
cout<<"the correct intersect array is given by:"<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}