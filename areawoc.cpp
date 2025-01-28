#include<iostream>
#include<math.h>
int main(){
int a,b,r,l,le,h;
std::cout<<"enter value of a,b,r,,le,h ";
std::cin>>a;
std::cin>>b;
std::cin>>le;
std::cin>>h;
std::cin>>r;
l= sqrt(pow(r,2)+ pow(h,2));
std::cout<<"circle "<<3.14*r*r<<std::endl;
std::cout<<"rect "<<le*b<<std::endl;
std::cout<<"square"<<a*a<<std::endl;
std::cout<<"cylinder "<<2*3.14*r*r+2*3.14*h<<std::endl;
std::cout<<"cone "<<3.14*r*r+ 3.14*r*l<<std::endl;
return 0;
}