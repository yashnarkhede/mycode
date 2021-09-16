#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp=n;
    int sum=0;
    while (temp>0){
        int lastdigit=temp%10;
        sum=sum+lastdigit*lastdigit*lastdigit;
        temp=temp/10;
    }
    if(sum==n){
        cout<<"it is an armstrong number"<<endl;
    } else{ 
        cout<<"it is not an armstrong number"<<endl;
    }


}