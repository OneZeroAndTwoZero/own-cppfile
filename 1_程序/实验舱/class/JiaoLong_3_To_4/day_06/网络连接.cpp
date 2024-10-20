#include<bits/stdc++.h>
using namespace std;

map<string,int> lian;

int ws(int a){
	if(a == 0) return 1;
	int ans = 0;
	while(a){
		a /= 10;
		ans ++;
	}
	return ans;
}

bool ok(string a){
	int a1,a2,a3,a4,a5;
	int cg = sscanf(a.c_str(),"%d.%d.%d.%d:%d",&a1,&a2,&a3,&a4,&a5);
	if(cg != 5) return 0;
	if(a1 < 0 || a1 > 255 || a2 < 0 || a2 > 255 || a3 < 0 || a3 > 255 || a4 < 0 || a4 > 255 || a5 < 0 || a5 > 65535){
		return 0;
	}
	int ws_n = ws(a1) + ws(a2) + ws(a3) + ws(a4) + ws(a5) + 4;
	int ws_t = a.size();
	if(ws_n != ws_t) return 0;
	return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string op,od;
		cin >> op >> od;
		if(op == "Server"){
			if(!ok(od)){
				cout << "ERR" << endl;
			}else if(lian[od] != 0){
				cout << "FAIL" << endl;
			}else{
				cout << "OK" << endl;
				lian[od] = i + 1;
			}
		}else{
			if(!ok(od)){
				cout << "ERR" << endl;
			}else if(lian[od] == 0){
				cout << "FAIL" << endl;
			}else{
				cout << lian[od] << endl;
			}
		}
	}

	return 0;
}

