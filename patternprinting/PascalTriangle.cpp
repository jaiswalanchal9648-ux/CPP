#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
 int main(){
    int m;
    cout<<"Enter rows";
    cin>>m;
 for(int i=0;i<m;i++){
    for(int space=0;space<=m-i-1;space++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<nCr(i,j)<<"  ";
    }
    cout<<endl;
 }

 }