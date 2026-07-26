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

     void change(Cricketer* c){
        (*c).runs=55000;           //  c->runs=55000
     }
};


int main(){
    Cricketer C1("Virat kohli",25000);
    //  cout<<C1.runs<<endl;
    //  C1.change(&C1);
    //    cout<<C1.runs<<endl;


    Cricketer* p=&C1;
    cout<<(*p).runs<<endl;
    (*p).runs=50000;
    cout<<C1.runs<<endl;
    
}