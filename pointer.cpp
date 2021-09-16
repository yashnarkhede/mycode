#include <iostream>
using namespace std;

int main(){

    int a =10;
    int*apointer;
    apointer=&a;
    
    cout<<&a<<endl;
    cout<<apointer<<endl;

    cout<<*apointer<<endl;
    cout<<*&a<<endl;

    *apointer=20;
    cout<<a<<endl;
}
    // output 
    // 0x16b6fb82c
    // 0x16b6fb82c
    // 10
    // 10
    // 20