#include<iostream>
using namespace std;
 int main(){
  int a,b,c;
 cout<<"Enter 1st number";
  cin>>a;
  cout<<"Enter 2nd number";
  cin>>b;
  cout<<"Enter 3rd number";
  cin>>c;
  if((a+b)>c and (b+c)>a && (c+a)>b){
    cout<<"Valid triangle ";
  }
  else{
    cout<<"Invalid triangle ";
  }
