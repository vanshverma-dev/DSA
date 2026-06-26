#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string ";
    getline(cin,s);
   /* unordered_*/map<char,int>mpp; // here we can also use unordered map for storing values here the average and best time complexity is o(1) but worst case can take o(n) n-> no. of elements in the map. worst case occurs only due to  internal collision (many ).the three  are used to convert hash functions into bucket number .1-> division method 2->folding method 3-> mid square method rarely used are 2 and 3rd 
   
    for(int i=0;i<s.size();i++){
        mpp[s[i]]+=1; // it will not create it into its ascii value 
    } 
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl; // map stores all data in sorted way
    }
    int q;
    cout<<"enter the number of queries you want to get answered :";
    cin>>q;
    while(q--){
        char character;
        cout<<"enter the character whose frequency you want to know :";
        cin>>character;
        cout<<"the frequency of the given character is given by:"<<mpp[character]<<endl;
        // during stroing or fetching of data in the map it takes log(n) time in all cases best or average or worst case
    }
return 0;
}