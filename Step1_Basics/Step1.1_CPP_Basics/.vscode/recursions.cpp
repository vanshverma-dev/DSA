#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n1;
cout<<"enter the values of n1 :"<<endl;
cin>>n1;
cout<<"the factorial of the given two numbers is given by:"<<factorial(n1);
}