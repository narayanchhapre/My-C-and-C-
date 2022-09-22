#include<iostream>
using namespace std;
void tripletsum(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==12){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    tripletsum(arr,10);
}