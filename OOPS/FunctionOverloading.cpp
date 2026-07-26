#include<iostream>
using namespace std;
class Loading{
 public:
    void sum(int a, int b){
        cout<<a+b<<endl;
    }

    void sum(int a, int b, int c){
        cout<<a+b+c<<endl;
    }


    void sum(string a, string b){
        cout<<a+b<<endl;
    }

    // int sum(int a, int b){       produce errer
    //     cout<<a+b<<endl;
    // }
};


int main(){
   Loading l;
   l.sum(4,3);
   l.sum("Anchal","Jaiswal");
}