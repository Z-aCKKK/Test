#include<iostream>
using namespace std;
int n,tmp;
int a[200];
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1)cout<<' ';
    }
}