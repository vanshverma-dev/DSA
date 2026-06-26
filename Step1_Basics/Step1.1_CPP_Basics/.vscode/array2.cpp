#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[]={56,775,58,57};
    for( i=0;i<4;i++){
        cout<<"the value at "<< i <<" is "<< arr[i]<<endl;}
        i=i-4;
        cout<<endl;
    do{
        cout<<"the value at "<< i <<" is "<< arr[i]<<endl;
        i++;
    }
    
    while(i<4);
    cout<<endl;
    i=i-4;
    while(i<4){
        cout<<"the value at "<<i<<" is "<< arr[i]<<endl;
        i++;
    }
    int* p=arr;// this is pointing towards the adrress of first array stored in it.
    cout<<"the value of arr[0]"<<" is"<<*p<<endl;// here  we are using the dereferencing operator for printing the value at that given oprator 
    cout<<"the value of arr[1]"<<" is"<<*(p+1)<<endl;
    cout<<"the value of arr[2]"<<" is"<<*(p+2)<<endl;
     cout<<"the value of arr[3]"<<" is"<<*(p+3)<<endl;// {adrees at the given point is adress cur+i*size of data type}
    return 0;
}