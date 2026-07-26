#include<iostream>
using namespace std;
 int main(){
    int m;
    cout<<"Enter rows";
    cin>>m;
    int i,j;
 for(int i=1;i<=m;i++){
    for(int j=1;j<=i;j++){
            if(i%2!=0){
                cout<<j;
            }
            else{
                char ch=j+64;
       char d=(char)ch;
       cout<<d;
            }
    }
    cout<<endl;
 }
 }