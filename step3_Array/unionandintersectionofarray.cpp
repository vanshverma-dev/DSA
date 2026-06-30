#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"enter the size of 1st array:";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
      int n2;
    cout<<"enter the size of 2nd array:";
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    cout<<"the first array looks like:";
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"the 2nd array looks like:";
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    int unionArr[st.size()];
    int index=0;
    for(auto it:st){
        unionArr[index++]=it;
    }
    cout<<"the union array is given by:"<<endl;
    for(int i=0;i<st.size();i++){
        cout<<unionArr[i]<<" ";
    }
    cout<<endl;
} // tc -O(n1log(n) + n2log(n)) +o(n1+n2)
// sc-o(n1+n2)+o(n1+n2) temp array here in order to return th answer