#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;

    Student(){                    // Default constructor

    }


     Student(int r){              // Parameterised constructor
        rno=r;
    }

    Student(string n, int r){              // Parameterised constructor
        name=n;
        rno=r;
    }
    


    Student(string n, int r, float g){              // Parameterised constructor
        name=n;
        rno=r;
        gpa=g;
    }
    
   
    Student(float g, string n, int r){              // Parameterised constructor
        name=n;
        rno=r;
        gpa=g;
    }


};


int main(){
   Student S1("Anchal",30);
   S1.gpa=9.7;
   cout<<S1.name<<" "<< S1.rno<<" "<<S1.gpa<<endl;

   Student S2;
   S2.name="Rinki";
   S2.rno=54;
   S2.gpa=9.7;
   cout<<S2.name<<" "<< S2.rno<<" "<<S2.gpa<<endl;

   Student S3("Jyoti",23,9.6);
   cout<<S3.name<<" "<< S3.rno<<" "<<S3.gpa<<endl;

   Student S4(65);
   cout<<S4.rno<<endl;

   Student S5(9.5,"Amrita",65);
   cout<<S5.name<<" "<< S5.rno<<" "<<S5.gpa<<endl;

   Student S6=S1;
   S6.name="Chiku";          // deep copy
   cout<<S6.name<<" "<< S6.rno<<" "<<S6.gpa<<endl;

   Student S7(S1);          // copy constructor  // deep copy
   S7.name="kavya";
   cout<<S7.name<<" "<< S7.rno<<" "<<S7.gpa<<endl;
    
}