#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int time_minute(char c[4]){
    REP(i,4) c[i] -= '0';
    return (((10 * c[0] + c[1]) * 6) + c[2]) * 10 +c[3];
}
void reverse_char(char c[4],ll s){
    s *=5;
    c[3] = s % 10; s/=10;
    c[2] = s %  6; s/=6;
    c[1] = s % 10; s/=10;
    c[0] = s;
    REP(i,4) c[i]+='0';
}

int main(){
    ll N;
    cin >> N;
    const ll M = 24 * 60 /5;
    int p[M+1] = {};
    char c[16];
    REP(i,N){
        cin >> c;
        //開始と終了時刻を配列に入れる開始１終了−１
        ll start = time_minute(c)/5;
        ll end   = (time_minute(c+5)+4)/5;
        p[start]++;
        p[end]--; 
    }
    for (int i = 1; i <= M; i++){
        //作った配列に対してそこまでの足した値を計算。いもす法
        p[i] += p[i-1];
    }
    c[4] = '-';
    c[9] = '\n';
    c[10] = 0;
    int s = -1;
    for (int i = 0; i <= M; i++)
    {
        if(p[i]>0){
            if(s<0) s = i;
        }else{
            if(s >= 0){
                //開始時刻　
                reverse_char(c,s);
                reverse_char(c+5,i);
                cout << c;
                s = -1;
            }
        }
    }
    


    

    return 0;
}