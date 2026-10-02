#include<iostream>
using namespace std;
struct Point{
    int x,y;
};
struct Rect{
};
int n,k;
Point p[100];
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
    }
}