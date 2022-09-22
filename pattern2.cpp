#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1,num=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<num<<" ";
            num=num+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}