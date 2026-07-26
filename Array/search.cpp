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

   bool flag=false;
   for(int i=0;i<n;i++){
    if(arr[i]==x){
        flag=true;
        break;
    }
   }
    if(flag==true){
        cout<<x<<"is present";
    }
    else cout<<x<<"is not present";
 }