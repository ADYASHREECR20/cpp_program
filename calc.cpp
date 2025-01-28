#include<iostream>
int main(){
int a,b,s,d,m,di,mo;
std::cout<<"enter value of a and b ";
std::cin>>a;
std::cin>>b;
s=a+b;
d=a-b;
m= a*b;
di=a/b;
mo=a%b;
std::cout<<"sum ="<<s<<std::endl;
std::cout<<"difference ="<<d;
std::cout<<"multiplication ="<<m;
std::cout<<"division ="<<di;
std::cout<<"modulus ="<<mo;
return 0;
}