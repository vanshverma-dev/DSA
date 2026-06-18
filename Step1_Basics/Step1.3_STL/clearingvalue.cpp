#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
     cout<<"enter the value of n which size vector you want to make "<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"the original vector is given by:"<<endl;
    print(v);
    // performing increasing sort
    sort(v.begin(),v.end());
    cout<<"increasing order sort "<<endl;
    print(v);
    // after performing decreasing sort here 
    sort(v.begin(),v.end(),greater<int>());
    cout<<"decreasing order :";
    print(v);
    // after popback
    v.pop_back();
    cout<<"vector after pop back is given by:"<<endl;
    print(v);
    // after erase
    v.erase(v.begin()+2);
    cout<<"After erase at index 2:";
    print(v);
    // insert
    v.insert(v.begin()+2,45);
    cout<<"the new vector after this is given "<<endl;
    print(v);
    cout<<"\n--- ITERATORS ---"<<endl;
    cout<<"Using begin() -> end(): ";
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //clear
    v.clear();
    cout<<"after clearing the size is given by: "<<v.size()<<" capacity is "<<v.capacity()<<endl;
}
