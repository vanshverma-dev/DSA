#include<iostream>
using namespace std;
void pointerswap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int &referencevariableswap(int &a,int &b){
   int temp =a;
   a=b;
   b=temp;
return a;
}
int main(){
    int a,b;
    cout<<"enter the values of a:"<<endl;
    cin>>a;
    cout<<"enter the values of b:"<<endl;
    cin>>b;
    pointerswap(&a,&b);
    cout<<"the swap of the two numbers is given by:"<<endl;
    cout<<"the swapped values of a and b  is given by :"<< a<<" and "<< b<<endl;
    referencevariableswap(a,b);
     cout<<"the swap of the two numbers is given by:"<<endl;
    cout<<"the swapped values of a and b  is given by :"<< a<<" and "<< b<<endl;
    referencevariableswap(a,b)=76;// this is called as return by reference 
    cout<<"the new value of a is :"<<a<<endl;// 

    return 0;
}