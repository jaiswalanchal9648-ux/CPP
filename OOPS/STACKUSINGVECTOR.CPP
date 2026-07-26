#include<iostream>
#include<vector>
using namespace std;

class stack{
    vector<int>v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty";
            return ; 
        }
        v.pop_back();
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty";
            return -1;
        }
        int lastIdx=v.size()-1;
        return v[lastIdx];
    }
    bool isEmpty() {
        return v.size() == 0;
    }

};

int main(){
    stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}