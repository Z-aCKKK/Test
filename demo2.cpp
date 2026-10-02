#include<iostream>
#include<queue>
using namespace std;
struct node{
    int x,y,t;
};
int m,n,x1,x2,y11,y2,k,tmp1,tmp2;
int map[300][300];
int vis[300][300];
int dx[6] = {0,1,1,1,0,-1};
int dy[6] = {1,1,0,-1,-1,0};
queue<node> b;
void bfs(){
    int res = 0x3f3f3f3f;
    while(!b.empty()){
       node tmp = b.front();
       b.pop();
       if(tmp.x == x2&&tmp.y==y2){
        res = min(res,tmp.t);
        continue;
       }
       for(int i=0;i<6;i++){
            int tox = tmp.x+dx[i],toy=tmp.y+dy[i];
            if(vis[tox][toy]==1) continue;
            if(tox<0||toy<0||tox>=m||toy>=n) continue;
            if(map[tox][toy]==1) continue;
            b.push({tox,toy,tmp.t+1});
            vis[tox][toy]=1;
       }
       cout<<b.size()<<endl;
    }
    cout<<res+1;
}
int main(){
    cin>>m>>n;
    cin>>x1>>y11>>x2>>y2;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>tmp1>>tmp2;
        map[tmp1][tmp2] = 1;
    }
    vis[x1][y11] = 1;
    b.push({x1,y11,0});
    bfs();
}