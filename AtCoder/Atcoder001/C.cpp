#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define zero_pad(num) setfill('0') << std::right << setw(num)
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;

int main() {
    ll deg, dis;
    // scanf("%lld%lld",&deg,&dis);
    cin >> deg >> dis;
    if(dis < 15){
        cout << "C 0" << endl;
        // printf("C 0\n");
        return 0;
    }
    vector<int> angle = {113,338,563,788,1013,1238,1463,1688,1913,2138,2363,2588,2813,3038,3263,3488};
    vector<string> azimuth = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
    
    string dir;
    if(deg >= 3488){
        dir = "N";
    }else{
        for(int i = 0; i < 16; i++){
            if(deg < angle[i]){
                dir = azimuth[i];
                break;
            }
        }
    }

    vector<int> c = {
        15, 93, 201, 327, 477, 645, 831, 1029, 1245, 1467, 1707, 1959
    };
    ll w;
    for(int i = 11; i >= 0; i--){
        if(dis >= c[i]){
            w = i + 1;
            break;
        }
    }
    printf("%ls %lld\n",dir,w);
    cout << dir << " " << w << endl;
    
}
