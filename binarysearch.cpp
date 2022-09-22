#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            return mid;
        }
        
        mid=s+(e-s)/2;
    }
       return -1;
}

int main(){
    int arr[6]={1,3,4,5,6,12};
    int key;
    cout<<"enter the element to be search:"<<endl;
    cin>>key;
  int index=  binarysearch(arr,6,key);
  cout<<"the search element present at index   "<<index;
}