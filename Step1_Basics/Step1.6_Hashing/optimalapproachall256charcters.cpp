#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the striung whose charcters frequency you want to know :";
    getline(cin,s);
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1; // precomputing is performed here 
    }
    int q;
    cout<<"enter the number of the queries :";
    cin>>q;
    while(q--){
      char character;
      cout<<"enter the characters whose frequency you want to check:";
      cin>>character;
      cout<<"the grequency of the given character is given by:"<<hash[character]<<endl;
    }

return 0;
}