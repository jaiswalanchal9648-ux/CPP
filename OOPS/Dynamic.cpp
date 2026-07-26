#include<iostream>
using namespace std;
class Cricketer{
    public:
      string name;
      int runs;

      Cricketer(string name, int runs){     // for same attributes use this keyword
          this->name=name;
          this->runs=runs;
      }
};


int main(){
    Cricketer C1("Virat kohli",25000);
    Cricketer* C2=new Cricketer("Rohit sharma",18000);      // Object pointer dynamically
    cout<<C2->name<<" "<<C2->runs<<endl;
    
}