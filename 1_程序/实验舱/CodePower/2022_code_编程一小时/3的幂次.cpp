#include<bits/stdc++.h>
using namespace std;

long long c(long long n){
	long long i = 0;
	while((long long)pow(3,i) <= n){
		if((long long)pow(3,i + 1) > n){
			return i;
		}
		i ++;
	}
}

long long m(long long n){
	long long cnt = 1;
	while(n --){
		cnt *= 3;
	}
	return cnt;
}

int main(){
	long long n;
	long long t;
	cin >> t;
	for(long long i = 0;i < t;i++){
		cin >> n;
		long long a[10005] = {0};
		long long cnt = 0;
		bool t = 1;
		while(n){
			if(n == 2){
				cout << -1 << endl;
				t = 0;
				break;
			}
			long long m_ = c(n);
			a[cnt ++] = m(m_);
			if(cnt >= 2) if(a[cnt - 1] == a[cnt - 2]){
				cout << -1 << endl;
				t = 0;
				break;
			}
			n -= pow(3,m_);
		}
		if(!t){
			continue;
		}
		sort(a,a + cnt);
		for(long long i = 0;i < cnt;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

