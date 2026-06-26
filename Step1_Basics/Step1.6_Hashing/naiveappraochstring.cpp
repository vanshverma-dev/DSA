#include<bits/stdc++.h>
using namespace std;
int fun(char c,vector<char>v)
{
    int count=0;
    for(int i=0;i<v.size();i++){

        if(v[i]==c){
            count++;
        }

    }
return count;
}
int main(){
    char c;
    cout<<"enter the caharacter whose frequency you want to check:";
    cin>>c;
    vector<char>v={'v','a','n','s','h','v','e','r','m','a'};
    // here we are only passing the character and the vector
    cout<<"the frequency of the given character is given by :"<<fun(c,v);
return 0;
}