#include<iostream>
using namespace std;
int add(int num1,int num2);// this is called as function prototype in cpp...
void greet(void);
int main(){
    int a,b;//here the a and b are actual  arguments 
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
cout<<"the sum of the two numbers is given by :"<<add(a,b)<<endl;\
greet();
return 0;
}
int add(int num1,int num2){
    int c=num1+num2;// here the num1 and num2 are formal  arguments 
    return num1+num2;
}
void greet(void){
    cout<<"good morning future programmer:"<<endl;
}
