#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> n={0,1,2,3,4,5,6,7,8,9};
    int t;
    cout<<"Enter the target sum : ";
    cin>>t;
    int i=0,j=n.size()-1;
    while(i<j){
        if(n[i]+n[j]>t){
            j--;
        }
        else if(n[i]+n[j]<t){
            i++;
        }
        else{
            cout<<"("<<n[i]<<","<<n[j]<<")"<<endl;
            i++;
        }
    }
    return 0;
}