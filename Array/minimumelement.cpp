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
   
   int mn=arr[0];
   for(int i=1;i<n;i++){
    // if(arr[i]<mn){
    //     mn=arr[i];
    // }
    mn=min(mn,arr[i]);   // to find min
   }
   cout<<"Minimum element is :";
   cout<<mn;
 }