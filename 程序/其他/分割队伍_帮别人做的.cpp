#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ans+=a[i];
	}
	int min_=10000000;
	int now=a[0];
	for(int i=1;i<n;i++){
		int cha=abs(ans-now-now);
		min_=min(min_,cha);
		now+=a[i];
	}
	cout<<min_<<endl;

	return 0;
}

