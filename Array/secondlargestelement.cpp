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
   int mx=arr[0];
   for(int i=1;i<n;i++){
    if(arr[i]>mx){
        mx=arr[i];
    }
   }
   int smx=arr[0];
   for(int i=1;i<n;i++){ 
    if(smx<arr[i] && arr[i]!=mx){
    smx=arr[i];
   }
}
   cout<<"Second largest element is";
   cout<<smx;
   
 }