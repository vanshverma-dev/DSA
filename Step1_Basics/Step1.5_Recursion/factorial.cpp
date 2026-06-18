#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
  if(n==1) return 1;
return n*factorial(n-1);

}
int main(){
    int n;
cout<<"enter the number whose factorial you want to calculate:";
cin>>n;
cout<<"the factorial of the given no. is given by:"<<factorial(n)<<endl;

return 0;
}