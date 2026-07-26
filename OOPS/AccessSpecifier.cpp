#include<iostream>
using namespace std;
class Student{
    public:
      int rln;
      string name;

      Student(){

      }

      Student(int r,string n,float m){
        rln=r;
        name=n;
        marks=m;
      }

      float getMark(){
        return marks;
      }
       
      void SetMark(float m){
        marks=m;
      }

 private:
     float marks;
      
};


int main(){
   Student s1(30,"Anchal",9.8);
   cout<<s1.getMark()<<endl;
   s1.SetMark(9.9);
   cout<<s1.getMark()<<endl;
    
}