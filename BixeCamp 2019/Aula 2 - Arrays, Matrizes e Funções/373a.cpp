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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int f[10], n, k, ans = 1;
char c;

int main(){_
	cin >> k;
	for (int i=4; i--;){
		for (int j=4; j--;){
			cin >> c;
			if (c == '.') continue;
			ans &= (++f[c-'0'] <= 2*k);
		}
	}
	cout << (ans ? "YES" : "NO") << endl;
	return 0;
}
