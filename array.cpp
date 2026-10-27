#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int smallest=arr[0];
    int largest=arr[0];
    int secs=arr[1];
    int secl=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=1;i<size;i++){
        if(arr[i]>smallest && arr[i]<secs ){
            secs=arr[i];
        }
        if(arr[i]<largest && arr[i]>secl){
            secl=arr[i];
        }
    }
    cout<<"Smallest element: "<<smallest<<endl;
    cout<<"Largest element: "<<largest<<endl;
    cout<<"Second smallest element: "<<secs<<endl;
    cout<<"Second largest element: "<<secl<<endl;
    return 0;
}