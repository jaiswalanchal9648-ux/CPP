#include<iostream>
using namespace std;
#include<set>
 int main(){
   set<int>s;

   s.insert(6);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);


   s.insert(1);
   s.insert(2);
   s.insert(3);

   cout<<"size= "<<s.size()<<endl;
   for(int val : s){              // ascending order data
    cout<<val<<" ";
   }
   cout<<endl;

 }