#include<iostream>
using namespace std;
// there are two types of the header files
//1. system header file : it comes with the compiler
//2.user defined header file : it is written by user 
// #include"this.h"//->this will produce a error if this.h is not present in the current directory
int main(){
int a=4,b=8;
cout<<"operators in c++"<<endl; 
cout<<"the following are the operators in cpp"<<endl;
//arthematic operators 
cout<<"the value of a+b is "<<a+b<<endl;
cout<<"the value of a-b is "<<a-b<<endl;
cout<<"the value of a*b is "<<a*b<<endl;
cout<<"the value of a/b is "<<a/b<<endl;
cout<<"the value of a%b is "<<a%b<<endl;
cout<<"the value of a++ is "<<a++<<endl;
cout<<"the value of ++a is "<<++a<<endl;
cout<<"the value of a-- is "<<a--<<endl;
cout<<"the value of --a is "<<--a<<endl;
//assignment operators used to assign value to the variables int a=3,int b=9; 
//comparsions operators
cout<<"the diiferent types of comparision operators in c++:"<<endl;
cout<<"the value of a==b is:"<<(a==b)<<endl;
cout<<"the value of a!=b is:"<<(a!=b)<<endl;
cout<<"the value of a<b is:"<<(a<b)<<endl;
cout<<"the value of a>b is:"<<(a>b)<<endl;
cout<<"the value of a<=b is:"<<(a<=b)<<endl;
cout<<"the value of a>=b is:"<<(a>=b)<<endl;
// the following are the logical operators in c++ 
cout<<"the diiferent types of comparision operators in c++:"<<endl;
cout<<"the value of logical and operator is:"<<((a==b)&&(a<b))<<endl;
cout<<"the value of logical or operator is:"<<((a==b)||(a<b))<<endl;
cout<<"the value of logical not operator is:"<<(!(a==b))<<endl;
return 0;

}