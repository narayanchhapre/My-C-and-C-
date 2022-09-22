#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;

        }
        
    }
    return 0;
}
int main(){
    int arr[10]={1,45,67,23,45,89,0,1,2,3};
    cout<<"enter the element to be search  :  ";
    int key;
    cin>>key;
    int found=search(arr,10,key);
    if(found){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element not present";
    }
}