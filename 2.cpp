//reverse the array
#include<iostream>
using namespace std;

void printarray(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<< arr[i] <<"";
        cout<<endl;
    }
}

void reversearray(int arr[],int start,int end){
    
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    //original array 
    printarray(arr, n);

    cout<<"Reverse the array"<<endl;
    
    //reverse array
    reversearray(arr,0,n-1);

    printarray(arr,n);
}