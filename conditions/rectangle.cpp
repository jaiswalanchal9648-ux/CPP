#include<iostream>
using namespace std;
 int main(){
  int l,b;
  cout<<"Enter length ";
  cin>>l;
  cout<<"Enter breadth ";
  cin>>b;
  int a,p;
  a=l*b;
  p=2*(l+b);
  if(a>p) 
    cout<<"Area of rectangle is greater";
  else
    cout<<"Perimeter of rectangle is greater";
 }