#include <bits/stdc++.h>
using namespace std;

long long n,k;
long long p[55],a[55];

long long cz(long long n,long long k){
  if (!n) return 1;
  if (k == 1) return 0;
  if (k == a[n]) return p[n];
  if (k == 2 + a[n - 1]) return p[n - 1] + 1;
  if (k < 2 + a[n - 1]) return cz(n - 1,k - 1);
  return p[n - 1] + 1 + cz(n - 1,k - a[n - 1] - 2);
}

int main(){
  scanf("%lld%lld",&n,&k);
  p[0] = 1,a[0] = 1;
  for(int i = 1; i <= n; i++){
    p[i] = p[i - 1] * 2 + 1;
    a[i] = a[i - 1] * 2 + 3;
  }
  printf("%lld",cz(n,k));
  return 0;
}
