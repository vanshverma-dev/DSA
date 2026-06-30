#include<bits/stdc++.h>
using namespace std;
vector<int>intersection(vector<int>&arr1,vector<int>&arr2,int n1,int n2){
    int vis[n2]={0};
    vector<int>intersectans;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j] && vis[j]==0 ){
                intersectans.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr1[i]<arr2[j]) break;
            
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

} // tc- O(n1*n2)