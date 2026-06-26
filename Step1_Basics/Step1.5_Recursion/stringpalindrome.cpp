#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-1-i]) return false;
    return ispalindrome(i+1,s);
}
int main(){
    cout<<"enter a string"<<endl;
    string s;
    cin>>s;
    cout<<"for checking the given string is palindrome or not :"<<endl;
    ispalindrome(0,s);
    cout<<ispalindrome(0,s);
// here 1 means it is true mean it is palindrome
return 0; 
}