//Repeat and Missing Number Array

#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
      if(arr[i]==arr[i+1]){
        cout<<arr[i]<<endl;
          break;
    }
  }
   
  for(int i=1;i<=n;i++){
      if(i!=arr[i-1]){
        cout<<i<<endl;
          break;
    }
  }
   
}


int main() {
 
    int arr[] = {3,1,2,5,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
    return 0;
}