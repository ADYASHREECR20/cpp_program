#include<iostream>
using namespace std;
class car{
public:
int year;
string model;
string make;
void details(){
cout<< "year:"<<year;
cout<< "model:"<<model;
cout<< "make:"<<make;
}
};
int main(){
car c1;
car *ptr;
ptr=&c1;
ptr->year = 1922;
ptr->make = "Tata Motors";
ptr->model = "Jaguar";
ptr->details();
}
