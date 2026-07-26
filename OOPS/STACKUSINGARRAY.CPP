#include<iostream>
using namespace std;

class stack{
    int top;
    int size;
    int *arr;

public: 
stack(int  s)
    {
    size=s;
    top=-1;
    arr=new int[s];
    }

void push(int value){
    if(top==size-1){
        cout<<"Stack Overflow :"<<endl;
        return;
    }
    else{
        top++;
        arr[top]=value;
        cout<<"Pushed "<<value<<"to the stack"<<endl;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow :"<<endl;
    }
    else{
        cout<<"Popped"<<arr[top]<<" from the stack"<<endl;
        top--;
    }
}

int peek(){
     if(top==-1){
        cout<<"Stack is empty :"<<endl;
        return -1;
    }
    else{
        return arr[top];
    }
}

bool Isempty(){
    return top==-1;
}

int IsSize(){
    return top+1;
}

};

int main(){
    stack S(5);
    S.push(8);
    S.push(7);
    S.push(6);
    S.push(5);
    S.push(4);
    S.pop();
    S.push(3);
    cout<<S.peek()<<endl;
}