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
student s1;
student *ptr;
ptr=&s1;
ptr->mark = 70;
ptr->name = "Kalia Sahu";
ptr->details();
}
