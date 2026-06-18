#include<iostream>
using namespace std;
int flower=89;
void fun(){
   cout<<"\nthe value of flower (global) is:"<<flower;
    return;
}
int main(){
    int a=8;
    float b=8.6;
    char c='a';
    int flower=69;
    flower=56;
    bool is_true=true;
    cout<<"the value of a is given by:"<<a<<"\nthe value of b is given by:"<<b<<"\n the value of c is given by:"<<c<<"\nthe value of bool data type is either true or false:"<<is_true;
    fun();
   cout<<"\nthe value of flower(local) is :"<<flower;
    return 0;
}