#include<bits/stdc++.h>
using namespace std;

struct an{
	int t = 0,f = 0;
};

int main(){
	int t;
	cin >> t;
	while(t --){
		int n,m;
		cin >> n >> m;
		map<string,string> check;
		an check2[105][2];
		bool r = 1;
		for(int i = 0;i < m;i++){
			string in,ans;
			cin >> in >> ans;
			if(check[in] != "" && check[in] != ans){
				r = 0;
				break;
			}else{
				check[in] = ans;
			}
			for(int j = 0;j < n;j++){
				if(in[j] == '0'){
					if(ans == "0"){
						check2[j][0].f += 1;
					}else{
						check2[j][0].t += 1;
					}
				}else{
					if(ans == "0"){
						check2[j][1].f += 1;
					}else{
						check2[j][1].t += 1;
					}
				}
			}
		}
		int f = 0;
		for(int i = 0;i < n;i++){
			if((check2[i][0].f * check2[i][0].t) && (check2[i][1].f * check2[i][1].t)) f ++;
		}
		if(f == n) r = 0;
		if(r) cout << "OK" << endl;
		else cout << "LIE" << endl;
	}

	return 0;
}

