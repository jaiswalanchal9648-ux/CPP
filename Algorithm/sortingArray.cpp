#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>



bool comparitor(pair<int,int>p1 , pair<int,int>p2) {

    if(p1.second < p2.second)  return true;
    if(p1.second > p2.second)  return false;

    if(p1.first < p2.first)    return true;
    else                       return false;



   }

 int main(){

   // 1st method
  //  int arr[11]={6,7,8,4,3,2,23,45,5,42,25};
    
  //  sort(arr,arr+11);             // asc order
  //  for(int val : arr){
  //           cout<<val<<" ";
  //  }
  //  cout<<endl;




  // 2nd method
  // vector<int>vec={1,4,3,7,8,2};

  // sort(vec.begin(),vec.end());     // asc order



  //   for(int val : vec){
  //           cout<<val<<" ";
  //  }
  //  cout<<endl;



  //   sort(vec.begin(),vec.end(), greater<int>());    // desc order
  //       for(int val : vec){
  //           cout<<val<<" ";
  //  }
  //  cout<<endl;






  // 3rd method
   // asc order on the basis of first key value
  //  vector<pair<int,int>>vec={{1,2},{5,4},{8,6},{3,5}};

  // sort(vec.begin(),vec.end());     

  //   for(auto p : vec){
  //   cout<<p.first<<" "<<p.second<<" "<<endl;
  // }












  

   // 4th method
   // asc order on the basis of second key value


   vector<pair<int,int>> vec = { {1,2},{5,4},{8,6},{3,5},{3,2} };

    sort(vec.begin() , vec.end() , comparitor );     

    for(auto p : vec){
    cout<<p.first<<" "<<p.second<<" "<<endl;
  }

    





  

 }