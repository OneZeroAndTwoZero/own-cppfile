#include<bits/stdc++.h>
using namespace std;

struct p{
	int id,t;
};

p a[100005] = {0};

bool cmp(p a,p b){
	return a.t < b.t;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].t;
		a[i].id = i + 1;
	}
	sort(a,a + n,cmp);
	long long ans = 0,now = 0;
	for(int i = 0;i < n;i++){
		ans += now;
		now += a[i].t;
		cout << a[i].id << " ";
	}
	cout << endl;
	double dans = (double)ans / (double)n;
	printf("%.2lf\n",dans);
	

	return 0;
}

