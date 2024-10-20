#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int read() {
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9') {
		if(ch=='-')
			f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	return x*f;
}
int a[100005];
ll ans;
bool cmp(int a,int b) {
	return abs(a)>abs(b);
}
int main() {
    #ifndef ONLINE_JUDGE;
	freopen("admin.in.txt", "r", stdin);
    #endif;
    int n,k;
	cin>>n>>k;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1; i<=n; i++) {
		if(a[i]<0&&k>0) {
			a[i]=abs(a[i]);
			k--;
		}
	}
	if(k==0) {
		for(int i=1; i<=n; i++) {
			ans+=a[i];
		}
		cout<<ans;
	} else {
		if(k%2==0) {
			for(int i=1; i<=n; i++) {
				ans+=a[i];
			}
			cout<<ans;
		} else {
			int pd=0;
			sort(a+1,a+n+1);
			for(int i=1; i<=n; i++) {
				if(a[i]==0) {
					pd=1;
					break;
				}
			}
			if(pd==1) {
				for(int i=1; i<=n; i++) {
					ans+=a[i];
				}
				cout<<ans;
			} else {
				for(int i=1; i<=n; i++) {
					if(k>0) {
						a[i]*=-1,k--;
					} else {
						break;
					}
				}
				for(int i=1; i<=n; i++) {
					ans+=a[i];
				}
				cout<<ans;
			}
		}
	}
	return 0;
}
