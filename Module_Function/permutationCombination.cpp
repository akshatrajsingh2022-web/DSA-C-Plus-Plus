#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=x;i>1;i--){
        a*=i;
    }
    return a;
}
int permu(int n, int r){
    return((fact(n))/fact(n-r));
}
int combi(int n,int r){
    return(permu(n,r)/fact(r));
}
int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<permu(n,r);
    cout<<endl;
    cout<<combi(n,r);
}