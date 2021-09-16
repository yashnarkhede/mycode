#include <iostream>
using namespace std;

int sum(int input[],int n){
    if (n==0)
    {
        return 0;
    }
    return input[0]+ sum(input+1,n-1);
}

int main(){

    int input[5]={3,4,5,6,7};
    int*ptr = input;
    cout<<sum(ptr,5)<<endl;
    return 0;
    
}