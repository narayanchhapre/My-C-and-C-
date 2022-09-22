#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the integer:"<<endl;
    cin>>n;
    int m=n;
    int mask=0;
    while(m!=0){
        if(n==0){
            return 1;
        }
         mask=(mask<<1|1);
         m=m>>1;
        
    }
    int ans=(~n)&mask;
    cout<<"the complement of integer is:"<<ans;
    
}
