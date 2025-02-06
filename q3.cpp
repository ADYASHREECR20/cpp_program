#include<iostream>
using namespace std;
class student{
public:
int mark;
string name;
void getGrade(){
cout<< "name:"<<name;
cout<< "mark:"<<mark;
if(mark>=90)
cout<<"grade : A"<<endl;
if(mark>=80 && mark<90)
cout<<"grade : B"<<endl;
if(mark>=70 && mark<80)
cout<<"grade : C"<<endl;
if(mark>=60 && mark<70)
cout<<"grade : D"<<endl;
}
};
int main(){
int student::*ptr1=&student::mark;// pointer to member of a class
string student::*ptr2=&student::name;
void (student::*ptr3)()=&student::getGrade;

student s1;
s1.*ptr1 = 100;
s1.*ptr2 = "Adyashree Das";
(s1.*ptr3)();
}
