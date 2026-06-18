#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(4,2);
    cout<<"the capacity of the vector is given by:"<<v.capacity()<<endl;
     cout<<"the size  of the vector is given by:"<<v.size()<<endl;
     v.push_back(6);
     cout<<"the capacity of the vector is given by:"<<v.capacity()<<endl;
     cout<<"the size  of the vector is given by:"<<v.size()<<endl;
     cout<<"the elements of the vector is given by:"<<endl;
     int i;
     for(int i=0;i<v.size();i++)
{   cout<<" "<< v[i];

}

}