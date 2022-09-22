#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    while(n!=0){
        int rev=n%10;
        cout<<rev;
        n=n/10;
        
    }

}
