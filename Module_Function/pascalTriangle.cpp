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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<combi(i,j)<<" ";
        }
        cout<<endl;
    }
}