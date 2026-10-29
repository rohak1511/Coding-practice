#include<iostream>
using namespace std;
void checkiIndex(int arr[],int n,int index){
    if(index<0 || index>=n){
        throw "Index out of bounds";
    }
    cout<<"Element at index "<<index<<" is "<<arr[index]<<endl;
}
int main(){
    int arr[]={10,2,3,40,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    try{
        checkiIndex(arr,n,2);
        checkiIndex(arr,n,5);
    }
    catch(const char* msg){
        cerr<<msg<<endl;
    }
    return 0;
}