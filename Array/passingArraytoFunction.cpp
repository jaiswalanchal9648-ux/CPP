#include<iostream>
using namespace std;

void change(int a[]){
    a[0]=10;
}                                   // by default call by reference

 int main(){
        int arr[]={1,2,3,4,5,5,6,7};
        cout<<arr[0]<<endl;
        change(arr);
        cout<<arr[0]<<endl;
 }