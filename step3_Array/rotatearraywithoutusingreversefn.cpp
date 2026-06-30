#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
while(start<=end){
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}


}
void rotateeletoright(int arr[],int n,int d){

reverse(arr,0,n-d-1); // reverse first n-d elements 
reverse(arr,n-d,n-1);
reverse(arr,0,n-1);


}
void rotateeletoleft(int arr[],int n,int d){

reverse(arr,0,d-1);// reverse first d elements 
reverse(arr,d,n-1);//reverse last n-d elements 
reverse(arr,0,n-1);//revese all elemnts 

}
int main() {
int n;
cout<<"enter the size of array you want to create:";
cin>>n;
int arr[n];
    int duplicate[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    duplicate[i]=arr[i];
}
cout<<"elements of the original array is given by:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    int d;
    cout<<"\nenter by how many steps rotate:";
    cin>>d;
    d=d%n;
    rotateeletoright(arr,n,d);
    cout << "The array after right rotation is: ";
        for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout<<endl;

    rotateeletoleft(duplicate,n,d);
    cout << "The array after left rotation is: ";
        for (int i = 0; i < n; i++)
    cout << duplicate[i] << " ";


return 0;
}