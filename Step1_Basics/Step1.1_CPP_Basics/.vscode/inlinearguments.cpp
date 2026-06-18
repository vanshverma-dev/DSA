// Sirf choti (1-3 line), frequently called, non-recursive functions mein use karna hain
//Normal function call mein CPU ko overhead hota hai — function ka address dhundho, stack frame banao, jump karo, wapas aao. inline se compiler function call ki jagah code directly paste kar deta hai.
// when there is static variables never use inline with it
// int strlen(const char*p) p remains same does not changes with function
#include<iostream>
using namespace std;
int multiply(int a,int b){
    return a*b;
}
int money(int actualmoney,float interestrate=1.04){
    return actualmoney*interestrate;
}
int main(){
    int a,b;
    cout<<"the values of a and b is given by:"<<endl;
    cin>>a>>b;
    cout<<"the multiply of the two numbers a and b is given by:"<<multiply(a,b)<<endl;
    cout<<"the money you will recieve after one year is given by:"<<money(10000)<<endl;// this is default argument
    cout<<"the money you will recieve after one year is given by:"<<money(10000,1.1)<<endl;

}

// Sirf choti (1-3 line), frequently called, non-recursive functions mein use karna hain
//Normal function call mein CPU ko overhead hota hai — function ka address dhundho, stack frame banao, jump karo, wapas aao. inline se compiler function call ki jagah code directly paste kar deta hai.
// when there is static variables never use inline with it 