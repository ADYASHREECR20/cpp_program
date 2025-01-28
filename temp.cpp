#include<iostream>
float celcius_at_depth(int d){
return 10*d+20;
}
float fahrenheit(float c){
return 1.8*c+32;
}

int main(){
int d;
float c, f;
std::cout<<"enter depth ";
std::cin>>d;
c= celcius_at_depth(d);
f= fahrenheit(c);
std::cout<<"celcius="<<c<<std::endl;
std::cout<<"fahrenheit ="<<f;


}