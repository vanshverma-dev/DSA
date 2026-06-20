#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string whose chaarcters frequency you want to count:";
    getline(cin,s);
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'A']+=1;// this is basically precomputing performed here 

    }
    int q;
    cout<<"enter the number of queries you want to get answered:";
    cin>>q;
    while(q--){
        char character;
        cout<<"enter the characters whose frequency you want to get:";
        cin>>character ;
        cout<<"the frequency of the given charcater in the string is given by :"<<hash[character-'A']<<endl;
    }
return 0;
}