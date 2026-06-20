#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cout<<"enter a string here ";
   getline(cin,s);// instead of cin we use getline this accepts the spaces in the given string
   // now we have string entered by user now precomputation
   int hash[26]={0};
   for(int i=0;i<s.size();i++){
      hash[s[i]-'a']+=1;
   }
   int q;
   cout<<"enter the number of queries you want to get answered: ";
   cin>>q;
   while(q--){
      char character;
      cin>>character;
      cout<<"the frequency of the entered chaarcter is given by:"<<hash[character-'a']<<endl;
   }


}