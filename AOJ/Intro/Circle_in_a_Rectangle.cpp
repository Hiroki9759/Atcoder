#include<bits/stdc++.h>
using namespace std;

int main(){
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if (0 <= x - r && 0 <= y - r && x + r <= W && y + r <= H)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}