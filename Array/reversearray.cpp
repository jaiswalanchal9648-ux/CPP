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
   cout<<"Reverse of array";
    
   int i=0,j=n-1;
   //int temp;
   while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
   };

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
 }