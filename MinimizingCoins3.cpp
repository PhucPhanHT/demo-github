// Written by Andrew - Phanh
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define NAME "TASK"
#define ll long long
#define ii pair<int,int>
#define Getbit(x,y) (((x)>>(y))&1)
#define TurnOn(x,y) ((x)(1ll<<y))
#define TurnOff(x,y) ((x)^(1ll<<y))
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

const int MAXN = 1e6;

int n;
int coin[MAXN + 2],dp[MAXN + 2];

void input(){
    cin >> n;
    FOR(i,1,n) cin >> a[i];
}

void solve(){

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (fopen(NAME".inp","r")){
        freopen(NAME".inp","r",stdin);
        freopen(NAME".out","w",stdout);
    }
    int tc;
    tc = 1;
    //cin >> tc;
    while(tc--){
        input();
        solve();
    }
    return 0;
}

/**"Genius is 1% talent and 99% percent hard work" - Albert Einstein**/


