#include<bits/stdc++.h>
using namespace std;

struct tem{
	long long z,ans;
	int id;
};

priority_queue<long long,vector<long long>,greater<long long> > a;
long long check;
int t,now = 0;
tem need[10005] = {0};

bool cmp1(tem a,tem b){
	return a.z < b.z;
}

bool cmp2(tem a,tem b){
	return a.id < b.id;
}

bool su(long long a){
	if(a == 2) return 1;
	if(a % 2 == 0 || a < 2) return 0;
	for(long long i = 2;i <= a / i;i ++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	scanf("%d",&t);
	for(int i = 0;i < t;i++){
		scanf("%lld",&need[i].z);
		need[i].id = i;
	}
	sort(need,need + t,cmp1);
	a.push(4);
	a.push(7);
	while(now < t){
		check = a.top();
		if(check > need[now].z && su(check)){
			need[now ++].ans = check;
		}
		a.pop();
		a.push(check * 10 + 4);
		a.push(check * 10 + 7);
	}
	sort(need,need + t,cmp2);
	for(int i = 0;i < t;i++){
		printf("%lld\n",need[i].ans);
	}

	return 0;
}

