#include<iostream>
using namespace std;
int main(){
int x=10;
float y = 20.5;
void *p;
p= &x;
cout<<x<<" "<<*(int*)p<<endl;
p=&y;
cout<<y<<" "<<*(float*)p;
return 0;
}
