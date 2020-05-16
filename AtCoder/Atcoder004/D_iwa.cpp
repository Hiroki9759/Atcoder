#include<iostream>
using namespace std;
int sum(int s,int t){
    if(s>-1)return(t+s-1)*(t-s)/2;
    if(t<2)return(s-t)*(s+t-1)/2;
    return s*(s-1)/2+(t-1)*t/2;
}
int main(){
    int R,G,B,rl,gl,bl,ans=1<<30;
    cin>>R>>G>>B;
    for(gl=-300;gl<301;gl++){
    // 開始位置＋初期位置を０としていることへのズレ分の１００
    //greenの開始位置がgl 
    rl=min(gl-R,-100-R/2)+100;
    bl=max(gl+G,100-B/2)-100;
    ans=min(ans,sum(rl,rl+R)+sum(gl,gl+G)+sum(bl,bl+B));
    }
    cout<<ans<<endl;
    return 0;
}
