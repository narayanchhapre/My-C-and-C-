#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int product=1;
    int sum=0;

    while(n!=0){
       

         int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    int difference=product-sum;
    cout<<"the difference of product and sum of digit is:"<<difference;
}