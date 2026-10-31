#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,2,1,1};
    int size=sizeof(a)/sizeof(int);
    int req=size/2;
    int count=0;
    // for(int i=0;i<size;i++){
    //     count=0;
    //     for(int j=i;j<size;j++){
    //         if(a[i]==a[j]){
    //             count++;
    //         }
    //     }
    //     if(count>req){
    //         cout<<"majority element : "<<a[i]<<endl;
    //         break;
    //     }
    // }
    // moore's voting algorithm
    int candidate;
    for(int i=0;i<size;i++){
        if(count==0){
            candidate=a[i];
        }
        if(a[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<"majority element : "<<candidate<<endl;
    return 0;
}