#include<iostream>
#include<unordered_map>
using namespace std;
 int main(){
      unordered_map<string, int>m;
     
       m.emplace("camera",500);
       m.emplace("camera",500);
       m.emplace("camera",500);
       m.emplace("camera",500);
       m.emplace("tv", 50);

      
      for(auto p : m){
        cout<<p.first<<" "<<p.second<<" ";       //random order in keys 
        cout<<endl;
      }
 }