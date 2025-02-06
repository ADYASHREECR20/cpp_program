#include<iostream>
using namespace std;
int w(void *p){
cout<<"Int value:"<<*(int*)p<<endl;
}
int x(void *p){
cout<<"float value"<<*(float*)p<<endl;
}

int y(void *p){
cout<<"character:"<<*(char*)p<<endl;
}

int z(void *p){
cout<<"double value:"<<*(double*)p<<endl;
}


int main(){
int a=10;
float b=20.5;
char c='a';
double d= 30.0;
void *p;
w(&a);
x(&b);
y(&c);
z(&d);
return 0;
}
