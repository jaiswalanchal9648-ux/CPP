#include<iostream>
using namespace std;
 int main(){
   int arr[]={1,2,3,4,3,54,23,65,76,80};
   int n=sizeof(arr)/sizeof(arr[0]);
   int mn =INT16_MAX;
   for(int i=0;i<n;i++){
    mn=min(mn,arr[i]);   // to find min
   }
   cout<<"Minimum element is :";
   cout<<mn;
 }