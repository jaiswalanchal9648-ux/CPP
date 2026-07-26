#include<iostream>
using namespace std;
class Fraction{
   public:
      int num;
      int den;

 Fraction(int n, int d){
    num=n;
    den=d;
 }
 
 void display(){
    cout<<num<<"/"<<den<<endl;
 }

 Fraction operator+(Fraction f){    // operator overloading
        int n=num*f.den + f.num*den;
        int d=den*f.den;
        Fraction ans(n,d);
        return ans;
    }

 

};


int main(){
    Fraction f1(1,2);

    Fraction f2(1,4);
    f1.display();
    f2.display();

    Fraction f3=f1+f2;      // f1.operator+(f2)
    f3.display();
}