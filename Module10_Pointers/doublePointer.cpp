#include<iostream>
using namespace std;
int main(){
    //double pointer is use to store address of a single pointer
    int x=333;
    int* ptr1=&x;
    cout<<"Address of variable is : "<<ptr1<<" "<<&x<<endl;
    //what if we just use int* for double pointer=can initialise error
    int** ptr2=&ptr1;
    cout<<"Address of 1 pointer is : "<<ptr2<<" "<<&ptr1<<endl;
    cout<<*ptr2<<endl;//Which is address of 1st pointer
    cout<<**ptr2<<endl;//Which is value of variable


}