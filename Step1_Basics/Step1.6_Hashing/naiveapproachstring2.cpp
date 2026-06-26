#include<bits/stdc++.h>
using namespace std;
int fun(char c,string s){
    int count =0;
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            count++; // here we are pasing by value not by refernce 
        }
    }
    return count;
}
int main(){
char c;
cout<<"enter the character whose frequency you want to check:";
cin>>c;
string s="vanshverma";
cout<<"the frequency of the given character in the string is given by:"<<fun(c,s)<<endl;
return 0;
}