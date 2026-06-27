#include<bits/stdc++.h>
using namespace std;
int removeduplicatesbrute(vector<int>&arr){
    int n=arr.size();
    set<int>st;
    // first pass insert all elements into set
    // time complexity-> o(n*logn)
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    // second pass : put all elements back into the original array
    // time complexiy->o(n)
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    return index;
}
int main(){
    int n;
    cout<<"enter the size of array you want to declare:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the original array size is given by:"<<endl;
    int uniquesize = removeduplicatesbrute(arr);
    cout<<"array after removing duplicates:";
    for(int i=0;i<uniquesize;i++){
        cout<<arr[i]<<" ";
    }
   cout<<"\nnumber of unique elements is given by:"<<uniquesize<<endl;
   return 0;

}