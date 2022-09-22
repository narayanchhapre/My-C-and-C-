#include<iostream>
using namespace std;
void alternate(int arr[],int n){
    int start=0;
    int end=1;
    while(end<=n){
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
    }
    void print(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
int main(){
    int arr[6]={12,3,34,45,2,3};
    alternate(arr,6);
    print(arr,6);
}