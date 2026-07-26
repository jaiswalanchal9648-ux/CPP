#include<iostream>
using namespace std;
 int main(){
   int arr[]={1,2,3,4,3,54,23,65,76,80};
   int n=sizeof(arr)/sizeof(arr[0]);
   int mx =INT16_MIN;
   for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);   // to find max
   }
   cout<<"Maximum element is :";
   cout<<mx;
 }