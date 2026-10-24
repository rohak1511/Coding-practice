#include<iostream>
using namespace std;
int fact(int a){
    if(a==0){
        return 1;
    }
    for(int i=a-1;i>0;i--){
        a=a*i;
    }
    return a;
}
int npr(int n, int r){
    return fact(n)/fact(n-r);
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int total, select;
    cout<<"Enter total number of items: ";
    cin>>total;
    cout<<"Enter number of items to be selected: ";
    cin>>select;
    cout<<"Number of permutations: "<<npr(total, select)<<endl;
    cout<<"Number of combinations: "<<ncr(total, select)<<endl;
    return 0;
}