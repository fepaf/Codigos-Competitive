#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

int mask, all, its, uni, n, m, x, y, t, ans, cj[7];

int wh(int n){return n ? wh(n&(n-1))+1 : 0;}

int main(){_
    while ((cin >> n) && n){
        mask = all = 0;
        for (int i=7; i--;){
            cj[i] = (1<<i);
        }
        while(n--){
            cin >> x >> y;
            mask ^= (1<<x);
            mask ^= (1<<y);
            cj[x] |= cj[y];
            for (int i=7; i--;){
                if ((1<<i)&cj[x]){
                    cj[i] |= cj[x];
                }
            }
            all |= (1<<x)|(1<<y);
        }
        its = -1;
        uni = 0;
        for (int i=7; i--;){
            if ((1<<i)&all){
                its &= cj[i];
                uni |= cj[i];
            }
        }
        ans = (its==uni) && (wh(mask)==2 ||wh(mask)==0);
        cout << "Teste " << ++t << (ans?"\nsim\n":"\nnao\n") << endl;
    }
    return 0;
}
