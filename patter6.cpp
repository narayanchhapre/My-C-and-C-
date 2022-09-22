#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int row=1,count=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            col=col+1;
            count=count+1;
        
        }
        cout<<endl;
        row=row+1;
    }

}
