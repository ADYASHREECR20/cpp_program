#include<iostream>
using namespace std;
class student{
public:
int mark;
string name;
void details(){
cout<< "name:"<<name;
cout<< "mark:"<<mark;
}
};
int main(){
int student::*ptr1=&student::mark;// pointer to member of a class
string student::*ptr2=&student::name;
void (student::*ptr3)()=&student::details;

student s1;
s1.*ptr1 = 100;
s1.*ptr2 = "Adyashree Das";
(s1.*ptr3)();
}
