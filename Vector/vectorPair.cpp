#include<iostream>
#include<vector>
using namespace std;
 int main(){
  vector<pair<int,int>>vec={{1,2},{3,4}};

  vec.push_back({5,6});    // insert
 // vec.emplace_back(5,6);    // in-place objects create

  for(auto p : vec){
    cout<<p.first<<" "<<p.second<<" ";
  }

 }