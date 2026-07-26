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

      void print(Cricketer C){
            cout<<C.name<<" "<<C.runs<<endl;
      }
};


int main(){
    Cricketer C1("Virat kohli",25000);
    Cricketer C2("Rohit sharma",18000);
    C1.print(C1);
    C2.print(C2);
}