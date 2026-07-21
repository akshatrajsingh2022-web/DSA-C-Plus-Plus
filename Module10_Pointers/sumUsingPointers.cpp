#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p5=&x, *p4=&y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter values of variables: ";
    cin>>*p1>>*p2;
    cout<<*p1+*p2;
}