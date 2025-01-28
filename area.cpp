#include<iostream>
class area{
public:
void circle(int r){
std::cout<<"circle "<<3.14*r*r<<std::endl;
}
void rect(int le, int b){
std::cout<<"rect "<<le*b<<std::endl;
}
void square(int a){
std::cout<<"square"<<a*a<<std::endl;
}
void cylinder(int r, int h){
std::cout<<"cylinder "<<2*3.14*r*r+2*3.14*h<<std::endl;
}
void cone(int r, int l){
std::cout<<"cone "<<3.14*r*r+ 3.14*r*l<<std::endl;
}
};
int main(){
int a,b,r,l,le,h;
std::cout<<"enter value of a,b,r,l(slant height),le,h ";
std::cin>>a;
std::cin>>b;
std::cin>>l;
std::cin>>le;
std::cin>>h;
std::cin>>r;
area ar;
ar.circle(r);
ar.rect(le,b);
ar.square(a);
ar.cylinder(r,h);
ar.cone(r,l);

}