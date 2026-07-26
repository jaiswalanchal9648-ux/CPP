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
   
   int x;
   cout<<"Enter target ";
   cin>>x;
   int count=0;
   for(int i=0;i<n;i++){
    if(arr[i]>x){
        count++;
    }
   }
   cout<<"No. of elements greater than target element:";
   cout<<count;
 }