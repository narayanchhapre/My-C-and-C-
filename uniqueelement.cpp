#include<iostream>
using namespace std;
void findunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<< ans;
}
int main(){
    int arr[8]={2,5,3,4,3,2,4,5};
    findunique(arr,7);
}