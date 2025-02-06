#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the no of elements in the array:"<<endl;
cin >> n;  
int *p = new int [n];
for(int i =0;i<n;i++){
cout<<"enter the elements:"<<endl;
cin>>p[i];
}  
cout << "The elements in the array are: ";
for(int i=0; i<n;i++){
cout<<p[i]<<"";
}
delete[] p;
cout << "The elements in the array are: ";
for(int i=0; i<n;i++){
cout<<p[i]<<"";
}

return 0;
}





        