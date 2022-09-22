#include<iostream>
using namespace std;
void intersection(int arr[],int brr[],int n,int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<" ";
            }
            
        }
        
    }

}
int main(){
    int arr[5]={1,3,25,24,67 };
    int brr[6]={23,22,24,25,26};
    intersection(arr,brr,5,6);
}
