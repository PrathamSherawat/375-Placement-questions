//Maximum and minimum number in the array
#include<iostream>
using namespace std;

int main(){
    int arr[9]={3,5,4,1,9,10,12,45,3546};
    int min=arr[1];
    int max=0; int c;
    for(int i=0;i<=7;i++){
        if(arr[i]<arr[i+1]){
            max=arr[i+1];
            
        }
        else{
            max=arr[i];
            min=arr[i+1];
        }
    }

    cout<< min<<endl;
    cout<< max<< endl;
    return 0;
}