#include <iostream>
using namespace std;


   void bubbleSort(int arr[], int n){   //o(n^2)
    
    for (int i = 0; i < n-1; i++) {
      bool isSwap = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j] , arr[j+1]);
                isSwap = true;

            }
        }
        if(!isSwap){   // array is already sorted
          return;
        }
     }
  }

  void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
  }


int main() {
    int arr[] = {6, 2, 4, 1, 5};
    int n = 5;
    

    bubbleSort(arr,n);
    printArr(arr,n);
    
}
