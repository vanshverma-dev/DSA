#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n:";
    cin>>n;
    int count=0;
    int ld=0;
    int original=n;
    int reverse=0;
    int sum=0;
    while(n>0){
        n=n/10;
        count++;
    }
    n=original;
    while(n>0){
        ld=n%10;
        reverse=reverse*10+ld;
        sum=sum+(int)pow(ld,count);
        n=n/10;
    }
    cout<<"the reverse of the original no. is given by"<<" "<<reverse<<endl;
    cout<<"the no. of digits in the given number is: "<<count<<endl;
    if(original==reverse) cout<<"the given no. is palindrome"<<endl;
    else cout<<"the given number is not palindrome  :"<<endl;
    if(sum==original) cout<<"the given no. is armstrong number here :"<<endl;
    else cout<<"the given no. is not armstrong number "<<endl;
 return 0;
}