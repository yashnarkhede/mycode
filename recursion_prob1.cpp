#include<iostream>
using namespace std;

int power(int x,int n){

    if (n==0)
    {
        return 1;
    }
    
    int smallAns = power(x,n-1);
    int ans= x*smallAns;
    return ans;
}

int main(){

    cout<<power(4,2)<<endl;
    return 0;
}