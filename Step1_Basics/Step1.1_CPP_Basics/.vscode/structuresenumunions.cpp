#include<iostream>
#include<cstring>
using namespace std;
 typedef struct employee{
    int salary;
    char name[20];
}e1;
typedef union money {
    int rice;
    char car;
    float pounds;

}m1;

int main(){
enum meal{breakfast,lunch,dinner};
meal m2=lunch;
cout<<(m2==2)<<endl;



e1 s1;
s1.salary=1200000;
strcpy(s1.name,"rohandas");
cout<<"the value of m1 slary is "<<s1.salary<<endl;
cout<<"the name of the employee"<<" is "<<s1.name<<endl;

m1 u1;
u1.car='a';// memory is shared by all three and the largest size of memory allocated is 4
u1.rice=67; // if we try to print any other value we get garbage result since memory wasnt assigned for it 
u1.pounds=678;// memory is now currently only assigned for pounds only 
cout<<u1.pounds;//  since it is union data type here memory is used so much effiecietly for data manangement 
return 0;
}