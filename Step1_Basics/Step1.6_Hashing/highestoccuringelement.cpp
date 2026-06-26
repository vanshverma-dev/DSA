#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array you want to declare :";
    cin>>n;
    int arr[n];
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]+=1;
    }
    int max_freq=0;
    int ans_element=-1;
    cout << "\n--- Frequency Map ---" << endl;
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
        if(it.second>max_freq) {
            max_freq=it.second;
            ans_element=it.first;
        }
    }

    cout << "\n=========================================" << endl;
    cout << "The highest occurring element is: " << ans_element;
    cout << " (occurs " << max_freq << " times)" << endl;
    cout << "=========================================\n" << endl;
     
    int q;
    cout<<"enter the number of quries you want to get answered :";
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the number whoose frequency you want to check:";
        cin>>number;
        cout<<"the frequency of selected number in the array is  given by :"<<mpp[number]<<endl;

    }

}