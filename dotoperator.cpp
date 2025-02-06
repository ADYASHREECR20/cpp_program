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
s1.mark = 70;
s1.name = "Kalia Sahu";
s1.details();
}

