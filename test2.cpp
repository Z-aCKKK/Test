#include<iostream>
using namespace std;
int a,b,x,s,t,a1,a2,tmp,tmp1;
int hp=100;
int attack[2000],cure[1000];
int main(){
    cin>>a>>b>>x>>s>>t;
    cin>>a1;
    for(int i=0;i<a1;i++){
        cin>>tmp;
        attack[tmp] = 1;
    }
    cin>>a2;
    for(int i=0;i<a2;i++){
        cin>>tmp>>tmp1;
        cure[tmp] = tmp1+1;
    }
    for(int i=0;i<=t;i++){
        if(attack[i]==1){
            //cout<<1;
            if(s>=x) s-=x;
            else{
                hp -= x-s;
                s=0;
                if(hp<=0){
                    cout<<0;
                    return 0;
                }
            }
        }
        if(i-a>=0&&cure[i-a]==1){
            s+=50;
            if(s>100) s=100;
        }
        if(i-b>=0&&cure[i-b]==2) s=100;
        //cout<<hp;
    }
    cout<<hp;
}