// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class sort{
    public:
    void bubble(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                  int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
                }
            }
        }
    }
};
int main() {
    // int arr[]={8,5,9,4,7,3,2};
    // int n=7;

    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Elements of array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    sort s;
    s.bubble(arr,n);
    cout<<endl;
    cout<<"Sorted array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}