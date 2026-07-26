#include<iostream>
using namespace std;
 int main(){
    int m;
    cout<<"Enter rows";
    cin>>m;
    // Method1
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1;
        }
        cout<<endl;
    }
    
    // Method 2
     for(int i=1;i<=m;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
    
   // Method 3 
 for(int i=1;i<=m;i++){
      int a=1;
    for(int j=1;j<=i;j++){
        cout<<a;
        a=a+2;
    }
    cout<<endl;
 }
 }