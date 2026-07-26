#include<iostream>
using namespace std;
#include<string.h>
class Student {
    public:
    string name;
    string course;
    int schno;
    long long phoneno;
    string email;
};

int main(){
    Student S1;

    cout<<"Enter name";
    cin>>S1.name;

    cout<<"Enter course";
    cin>>S1.course;

    cout<<"Enter schno";
    cin>>S1.schno;

    cout<<"Enter phoneno";
    cin>>S1.phoneno;

    cout<<"Enter emailid";
    cin>>S1.email;

    // S1.name="Anchal";
    // S1.course="MCA";
    // S1.schno=130;
    // S1.phoneno=8318156091;
    // S1.email="anchaljaiswal12@gmail.com";
    cout<<"_ _ _ _STUDENT DETAILS_ _ _ _";
    cout<<S1.name<<endl;
    cout<<S1.course<<endl;
    cout<<S1.schno<<endl;
    cout<<S1.phoneno<<endl;
    cout<<S1.email<<endl;
}