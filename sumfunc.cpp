#include<iostream>
using namespace std;

void sum(int n){
    int total= (n*(n+1))/2;
    cout<<total;
    return;
}

int main(){
    int n;
    cin>>n;    
    
    sum(n);

}
