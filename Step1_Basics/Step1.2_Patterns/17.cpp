#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i)/2;
        for(int k=1;k<=2*i-1;k++){
            cout<<ch;
            if(k<breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        cout<<endl;
    }
}