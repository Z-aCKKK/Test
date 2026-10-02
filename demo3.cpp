#include<iostream>
using namespace std;
int si,n,tmp;
int len,cnt,spacenum;
string words[100000];
string spacebuild(int num){
    string s="";
    for(int i=0;i<num;i++) s+=" ";
    return s;
}
void out(int snum,int wordnum,int start){
    //cout<<1;
    //cout<<1;
    if(wordnum==1) cout<<words[start]<<spacebuild(snum)<<endl;
    else{
        int shang = snum/(wordnum-1),yu=snum%(wordnum-1);
        for(int i=0;i<wordnum;i++){
            cout<<words[i+start];
            if(i!=wordnum-1)cout<<spacebuild(shang);
            if(yu>0){
                cout<<" ";
                yu--;
            }
        }
        cout<<endl;
    }
}
int main(){
    cin>>si>>n;
    for(int i=0;i<n;i++) cin>>words[i];
    while(tmp<n){
        len=0;
        cnt=0;
        while(len+words[tmp].length()+cnt<si){
            len+=words[tmp].length();
            tmp++;
            cnt++;
        }
        spacenum = si-len;
        //cout<<1;
        out(spacenum,cnt,tmp-cnt);
    }
}