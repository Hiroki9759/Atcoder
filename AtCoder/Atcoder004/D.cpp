#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;

int sum(int x, int y){
  if(y <= 0) return (x * x - x - y * y - y) / 2;
  if(x <= 0) return (y * y + y + x * x - x) / 2;
  return (y * y + y - x * x + x) / 2;
}

int main(){
  int R, G, B; scanf("%d%d%d", &R, &G, &B);

  int ans = INT_MAX;

  int rs = -(200 + R) / 2, be = (202 - B) / 2;

  for(int g = -350; g <= 50; g++){
    int r = min(g - R, rs), b = max(g + G, be);

    int rv = sum(r + 100, r + R + 99);
    int gv = sum(g, g + G - 1);
    int bv = sum(b - 100, b + B - 101);

    ans = min(ans, rv + gv + bv);
  }

  printf("%d\n", ans);
  return 0;
}
