#include<iostream>
using namespace std;
 int main(){
  int n1;
  cin>>n1;
  char op;
  cin>>op;
  int n2;
  cin>>n2;
//   if(op=='+') cout<<n1+n2;
//   if(op=='-') cout<<n1-n2;
//   if(op=='*') cout<<n1*n2;
//   if(op=='/') cout<<n1/n2;



switch(op){
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
    if(n2!=0){  
        cout<<n1/n2<<endl;
    } 
    else cout<<"Does not exist";
    break;
    
    default:
        cout<<"Invalid operator";       
   }
 }