#include<iostream>
using namespace std;
int n,v,highest;
int x[10000];
int space[10000][10000];    
bool judge(int x,int y){
    bool flag1=false,flag2=false;
    for(int i=0;i<x;i++){
        if(space[i][y]==1){
            flag1=true;
            break;
        }
    }
    for(int i=x+1;i<n;i++){
        if(space[i][y]==1){
            flag2=true;
            break;
        }
    }
    return flag1&&flag2;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        highest = highest>x[i]?highest:x[i];
    }
    for(int i=0;i<n;i++){
        if(x[i]>0){
            for(int j=0;j<x[i];j++){
                space[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=highest;j++){
            if(space[i][j]==1) continue;
            if(judge(i,j)) v++;
        }
    }
    cout<<v;
}