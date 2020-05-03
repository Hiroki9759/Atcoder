#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int main(){
    int vx[] ={0,1,0,-1};
    int vy[] ={1,0,-1,0};
    int R,C,sy,sx,gy,gx;
    cin>>R>>C>>sy>>sx>>gy>>gx;
    string s[R];
    for(int i = 0;i<R;i++)cin>>s[i];
    sy--;sx--;gy--;gx--;
    queue<pair<int,int> >q;          queue<int>p;  
    q.push(make_pair(sy,sx));        p.push(0);    
    while(!q.empty()){
        pair<int,int>a=q.front();    int b = p.front();    
        q.pop();                     p.pop();        
        s[a.first][a.second]='#';
        if(a.first==gy&&a.second==gx){
            cout << b << endl;return 0;
        }
        REP(i,4){
            int x = a.second+vx[i],y=a.first+vy[i];
            if(x<0||y<0||x>=C||y>=R||s[y][x]=='#')continue;
            q.push(make_pair(y,x)); p.push(b+1);    
            s[y][x]='#';
        } 
    }
}   