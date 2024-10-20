#include<bits/stdc++.h>
using namespace std;

struct ren{
	string id;
	int old,sx;
	bool ok;  
	bool operator < (const ren & r) const {
		if(ok != r.ok) return ok > r.ok;
		if(ok == 1) if(old != r.old) return old > r.old;
		return sx < r.sx;
	}
};

int n;
ren p[102];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> p[i].id >> p[i].old;
		p[i].ok = (p[i].old >= 60);
		p[i].sx = i + 1;
	}
	sort(p,p + n);
	for(int i = 0;i < n;i++){
		cout << p[i].id << endl;
	}

	return 0;
}

