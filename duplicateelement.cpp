#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    cout<<ans;
}

int main(){
    int arr[5]={1,2,3,4,3};
    duplicate(arr,5);

}