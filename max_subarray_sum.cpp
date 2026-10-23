#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int max_sum=INT8_MIN;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=i;j<5;j++){
            sum+=a[j];
            max_sum=max(max_sum,sum);
        }
    }
    cout<<"max subarray sum :"<<max_sum<<endl;
    return 0;
}