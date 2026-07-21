#include<iostream>
using namespace std;
int main(){
    bool flag=true;
    bool* ptr= &flag;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;

    int x=4;
    int* ptr1=&x;
    cout<<*ptr1<<endl;
    (*ptr1)++;
    cout<<*ptr1<<endl;
    ptr1++;
    cout<<*ptr1<<endl;
    
}