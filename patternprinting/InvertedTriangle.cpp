#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number";
  cin>>n;

  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int k=0;k<n-i;k++){
      cout<<(i+1);
    }
    cout<<endl;
  }
  return 0;
}






// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter a number";
//   cin>>n;


//   for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//       cout<<" ";
//     }
//     for(int k=0;k<n-i;k++){
//         int d=i+65;
//         char ch=(char)d;
//       cout<<ch;
//     }
//     cout<<endl;
//   }
//   return 0;
// }