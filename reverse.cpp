#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp =n;
    int reverse=0;
    while(temp>0){
        int lastdigit= temp%10;
        reverse= reverse*10+ lastdigit;
        temp=temp/10;
    }
    cout<<reverse<<endl;

    if (n==reverse){
        cout<<"it is a special case"<<endl;
    } else{
        cout<<"it is a normal number"<<endl;
    }


}