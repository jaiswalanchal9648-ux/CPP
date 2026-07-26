#include<iostream>
using namespace std;
void reverse(int arr[], int i, int j){
        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
        int main() {
            int n;
            cout<<"Enter size";
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            cout<<endl;
            cout<<"Enter elements";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
            int k;
            cout<<"Enter number of rotation ";
            cin>>k;

            reverse(arr,0,n-1-k);
            reverse(arr,n-k,n-1);
            reverse(arr,0,n-1);

            for(int i=0;i<n;i++){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;

        }
