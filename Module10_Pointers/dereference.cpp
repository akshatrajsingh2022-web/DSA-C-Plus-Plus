#include<iostream>
using namespace std;
int main(){
    int x=32;
    int *p1=&x;
    //Accessing the value of variable without using it
    cout<<*p1;
    cout<<endl;
    //Updating variable without using its name 
    *p1=322222;
    cout<<*p1;
}