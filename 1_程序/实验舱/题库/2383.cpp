#include<bits/stdc++.h>
using namespace std;

struct zimu{
	char zm;
	int id;
};

zimu a[10005];

void p(int n){
	for(int i = 0;i < n - 1;i++){
		for(int j = 0;j < n - i - 1;j ++){
			if(a[j].zm > a[j + 1].zm){
				swap(a[j],a[j + 1]);
			}
		}
	}
}

int main(){
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0;i < n;i++){
		a[i].zm = s[i];
		a[i].id = i;
	}
	p(n);
	int ans = 0;
	for(int i = 0;i < n;i++){
		ans += abs(a[i].id - i);
	}
	cout <<ans << endl;

	return 0;
}

