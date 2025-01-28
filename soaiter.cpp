#include<iostream>
using namespace std;
namespace SOA{
void print(){
cout<<"Welcome To SOA";
}}
namespace ITER{
void print(){
cout<<"Welcome To ITER"<<endl;
}}

int main(){
ITER::print();
SOA::print();
return 0;
}