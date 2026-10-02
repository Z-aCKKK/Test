#include<iostream>
using namespace std;
int m,n,q;
int a[10000][10000];
int question[10000];
string judge(int item){
    for(int i=1;i<=m;i++){
        if(item>a[i][n]) continue;
        for(int j=1;j<=n;j++){
            if(a[i][j]==item){
                return "YES";
            }
        }
    }
    return "NO";
}
int main(){
    cin>>m>>n>>q;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<q;i++) cin>>question[i];
    for(int i=0;i<q;i++) cout<<judge(question[i])<<endl;
}