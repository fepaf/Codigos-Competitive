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

int n;
int l[MAX];

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> l[i];
    }
    sort(l, l+n);
    int smin = l[0] + l[1] - 1;
    int dmax = l[n-1] - l[0] + 1;
    if (dmax > smin) cout << "NO" << endl;
    else cout << "YES" << "\n" << dmax << endl;
    return 0;
}
