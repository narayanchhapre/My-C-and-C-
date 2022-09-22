#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]<key){
            s=mid+1;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else{
                ans=mid;
            e= mid-1;
            }
            mid=s+(e-s)/2;
    }
    return ans;

}
int lastoccurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]<key){
            s=mid+1;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else{
                ans=mid;
            s= mid+1;
            }
            mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[7]={1,2,3,3,3,3,5};
    int key=3;
    int index=firstoccurence(arr,7,key);
    cout<<"the first index of search element is "<<index<<endl; 
    int lastindex=lastoccurence(arr,7,key);
    cout<<"the last index of search element is "<<lastindex; 


}