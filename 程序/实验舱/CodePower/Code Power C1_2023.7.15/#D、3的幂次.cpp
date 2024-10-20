#include<bits/stdc++.h>
using namespace std;

int t;
long long n;

string to_three(long long a){
	string res = "";
	while(a){
		res = (char)(a % 3 + '0') + res;
		a /= 3;
	}
	return res;
}

long long jie(int a){
	long long res = 1;
	for(int i = 1;i <= a;i ++){
		res *= 3;
	}
	return res;
}

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d",&t);
	while(t --){
		scanf("%lld",&n);
		string s = to_three(n);
		if(n == 0 || s.find('2') != s.npos){
			printf("-1\n");
			continue;
		}
		for(int i = s.size() - 1;i >= 0;i --){
			if(s[i] == '1'){
				printf("%lld ",jie(s.size() - i - 1));
			}
		}
		printf("\n");
	}

	return 0;
}

