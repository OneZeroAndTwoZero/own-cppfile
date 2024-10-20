#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cctype>
#define N 1001000
typedef long long ll;
template<class T> inline void read(T &x) {
    x = 0; char c = getchar(); bool flag = false;
    while (!isdigit(c)) { if (c == '-') flag = true; c = getchar(); }
    while (isdigit(c)) x = x * 10 + (c ^ 48), c = getchar();
    if (flag)   x = -x;
}
using namespace std;
inline void MAX(int &a, int b) {
    if (b > a)  a = b;
}
int n;
int h[N];
namespace jzpforce {
    int bin[N];
    int check(int d) {
        int mxv = 0;
        for (int i = 1; i <= n; ++i)
            bin[h[i]/d] ^= 1, MAX(mxv, h[i]/d);
        int flag = 0;
        for (int i = 1; i <= mxv; ++i)
            flag |= bin[i], bin[i] = 0;
        return !flag;
    }
    void work() {
        int res = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= h[i]; ++j) {
                h[i] -= j;
                res += check(j);
                h[i] += j;
            }
        }
        printf("%d\n", res);
    }
}
namespace jzp {
	int bin[N + N];
	void work() {
		int mxv = 0;
		ll res = 0;
		for (int i = 1; i <= n; ++i) MAX(mxv, h[i]), ++bin[h[i]];
		for (int i = 1; i <= mxv; ++i) bin[i] += bin[i - 1];
		for (int i = mxv + 1; i <= mxv + mxv; ++i) bin[i] = bin[i - 1];
		for (int i = 1; i <= mxv; ++i) {
			int oddcnt = 0, lastodd = 0;
			for (int j = 2 * i - 1, now = bin[i-1]; now != n; now = bin[j], j += i) {
				if((bin[j] - now) & 1) {
					++oddcnt;
					if (oddcnt >= 3) { oddcnt = 0; break; }
					if (oddcnt == 2 && lastodd != j - i) { oddcnt = 0; break; }
					lastodd = j;
				}
			}
			if (!oddcnt) continue;
			if (oddcnt == 1 && lastodd != 2*i-1) continue;
			res += bin[lastodd] - bin[lastodd - i];
		}
		printf("%lld\n", res);
	}
}
int main() {
	freopen("bricks.in","r",stdin);
	freopen("bricks.out","w",stdout);
    read(n);
    for (int i = 1; i <= n; ++i) read(h[i]);
    // jzpforce::work();
	jzp::work();
    return 0;
}
