#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;


    Car(int p, string n, string t, int s){
        name=n;
        price=p;
        seats=s;
        type=t;
    }
    // void print(Car c){
    //     cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
    // }

    // void change(Car c){
    //     c.name="Fortuner"; 
    // }
};


int main(){
    Car c1(150000,"Honda City","Sedan",5);

     cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    
}