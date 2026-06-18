#include<iostream>
using namespace std;
double e(int x,int n)
{
    static double s=1;
    static double p=1,f=1;
    double r;
    if(n==0) return s;
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        s=s+p/f;
        return s;
    }
}
    int main(){
        int n;
        cout<<"enter the value of n:";
        cin>>n;
        cout<<"the value of e^1 is given by:"<<e(1,n)<<endl;
        return 0;
    }
    
     

