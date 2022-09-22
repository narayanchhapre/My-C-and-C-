#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
void sorting(int arr[],int n){
    for(int i=0,j=n-1;i<=j; ){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
        
    }
    
}
int main(){
    int arr[10]={0,0,0,0,1,1,0,1,1,0};
    sorting(arr,10);
    printarray(arr,10);
}