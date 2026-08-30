#include<iostream>
using namespace std;
#include<algorithm>

int main(){
  string s="acb";

  // for next permutation
  next_permutation(s.begin(), s.end());

  cout<<s<<endl;

   // for previous permutation
  prev_permutation(s.begin(), s.end());
  

  cout<<s;


  
}