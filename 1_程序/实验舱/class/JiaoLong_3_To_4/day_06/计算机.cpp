#include<bits/stdc++.h>
using namespace std;

map <string,int> lianjie;

bool ok(char s[]){
	long long a1,a2,a3,a4,a5;
	if(sscanf("%lld.%lld.%lld.%lld:%lld",&a1,&a2,&a3,&a4,&a5) != 5){
		return 0;
	}
	return 1;
//	long long a[5] = {-1,-1,-1,-1,-1};
//	int k = 0,dian = 0,maohao = 0,shu_0 = 0,shu_0_max = 0;
//	bool fir = 1;
//	for(int i = 0;i < s.size();i++){
//		if(s[i] == '.' || s[i] == ':'){
//			k ++;
//			shu_0 = 0;
//			fir = 1;
//			if(s[i] == '.'){
//				dian ++;
//			}else{
//				if(dian != 3) return 0;
//				maohao ++;
//			}
//		}else{
//		    if(s[i] == '0' && (i + 2 <= s.size()?s[i + 1] != '.' && s[i + 1] !=':':0) && fir == 1){
//				shu_0 ++;
//				shu_0_max = max(shu_0,shu_0_max);
//			}
//			fir = 0;
//			a[k] = a[k] == -1 ? (a[k] + 1) * 10 + (s[i] - '0') : a[k] * 10 + (s[i] - '0');
//		}
//	}
//	if(shu_0_max > 0 || dian != 3 || maohao != 1 || a[0] < 0 || a[0] > 255 || a[1] < 0 || a[1] > 255 || a[2] < 0 || a[2] > 255 || a[3] < 0 || a[3] > 255 || a[4] < 0 || a[4] > 65535){
//		return 0;
//	}else{
//		return 1;
//	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		char[] op,od;
		cin >> op >> od;
		if(op == "Server"){
			if(ok(od) == 0){
				cout << "ERR" << endl;
			}else if(lianjie[od] != 0){
				cout << "FAIL" << endl;
			}else{
				cout << "OK" << endl;
				lianjie[od] = i + 1;
			}
		}else{
			if(ok(od) == 0){
				cout << "ERR" << endl;
			}else if(lianjie[od] == 0){
				cout << "FAIL" << endl;
			}else{
				cout << lianjie[od] << endl;
			}
		}
	}

	return 0;
}


