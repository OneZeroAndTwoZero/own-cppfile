#include<bits/stdc++.h>
using namespace std;

struct node{
	int si,fi;
	bool operator <(const node &a)const{
		return fi < a.fi;
	}
};

int n,now = -1,ans = 0;
node a[1000005];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].si >> a[i].fi;
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		if(a[i].si >= now){
			ans ++;
			now = a[i].fi;
		}
	}
	cout << ans << endl;

	return 0;
}

