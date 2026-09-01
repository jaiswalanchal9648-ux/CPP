#include<iostream>
#include<map>
using namespace std;
 int main(){
      multimap<string, int>m;
     
      m.emplace("camera",500);
      m.emplace("camera",500);
      m.emplace("camera",500);
      m.emplace("camera",500);


      m.erase(m.find("camera"));  // only one camera is deleted

     
      
      for(auto p : m){
        cout<<p.first<<" "<<p.second<<" ";       //ascending order in keys 
        cout<<endl;
      }

     
 }