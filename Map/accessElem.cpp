#include<iostream>
#include<map>
using namespace std;
 int main(){
      map<string, int>m;
     
      m["tv"]=100;
      m["headphone"]=100;
      m["watch"]=50;
      m["tablet"]=120;
      m["laptop"]=50;
      m["phone"]=200;


      // m.insert({"camera", 500});
      m.emplace("camera",500);   // insert the camera key val

      m.erase("tv");   // erase tv
      
      for(auto p : m){
        cout<<p.first<<" "<<p.second<<" ";       //ascending order in keys 
        cout<<endl;
      }

      cout<<"count= "<<m.count("laptop")<<endl;   //count => return number of count of instances 


      if(m.find("camera") != m.end()){
        cout<<"found";
      }
      else{
        cout<<"not found";
      }
 }