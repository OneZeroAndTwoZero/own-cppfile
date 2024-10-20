#include<bits/stdc++.h>
using namespace std;

int a[8000005] = {0};

int read()
{
  int x = 0, f = 1;
  char ch = getchar();
  while (ch < '0' || ch > '9')
  {
    if (ch == '-')
      f = -1;
    ch = getchar();
  }
  while (ch >= '0' && ch <= '9')
  {
    x = (x << 1) + (x << 3) + (ch ^ 48);
    ch = getchar();
  }
  return x * f;
}

void kuai(int f,int l,int k){
	if(f >= l) return;
	int p = a[(f + l) / 2];
	int q = f,h = l;
	while(q <= h){
		while(a[q] < p){
			q ++;
		}
		while(a[h] > p){
			h --;
		}
		if(q <= h) swap(a[q ++],a[h --]);
	}
	if((h - f + 1) >= k) kuai(f,h,k);
	else kuai(q,l,k - (h - f + 1));
}

int main(){
	int n,k;
	n = read();
	k = read();
	for(int i = 0;i < n;i++){
		a[i] = read();
	}
	kuai(0,n - 1,k);
	cout << a[k - 1] << endl;

	return 0;
}

