#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 elements of the array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Elements of the array: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Reversed array: "<<endl;
    // directly printing the array in reverse order
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    // using two pointer approach to reverse the array
    int start=0;
    int end=4;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}