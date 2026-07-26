#include<iostream>
using namespace std;
 int main(){
   int n;
   cout<<"Enter the size of array";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements of array";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"Elements of array";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   int product=1;
   for(int i=0;i<n;i++){
    product *= arr[i];
   }
   cout<<"Product of element is: ";
   cout<<product;
 }