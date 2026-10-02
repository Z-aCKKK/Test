#include<iostream>
using namespace std;
int k,cnt,n;
string s;
char st[100000];
int judge(int begin,int end){
    bool flag;
    int c=0;
    char tmp[100000];
    for(int i=begin;i<=end;i++){
        flag = true;
        for(int j=0;j<=c;j++){
            if(tmp[j]==st[i]){
                flag = false;
            }
        }
        if(flag){
            tmp[c]=st[i];
            c++;
        }
    }
    return c*(end-begin+1);
}
int main(){
    cin>>k;
    cin>>s;
    //cout<<s.length();
    for(int i=0;i<s.length();i++){
        //cout<<s[i];
        if(s[i]>='a'&&s[i]<='z'){
            //cout<<1;
            st[cnt]=s[i];
            //cout<<st;
            cnt++;
        }
        else if(s[i]=='['){
            int tmp=s[i+1]-'1';
            for(int j=0;j<tmp;j++){
                st[cnt]=s[i-1];
                cnt++;
            }
        }
    }
    if(judge(0,cnt-1)<k) cout<<0;
    else{
        n=1;
    }
}