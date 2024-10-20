#include<bits/stdc++.h>
using namespace std;

struct an{
	int t = 0,f = 0;
};

bool ok(an check2[105][2],bool us[105],int n){
	bool r2 = 1,t = 0;
	while(1){
		r2 = 0;
		for(int i = 0;i < n;i++){
			if(!us[i]){
				us[i] = 1;
		        if(max(check2[i][0].f,0) * max(check2[i][0].t,0) == 0 || max(check2[i][1].f,0) * max(check2[i][1].t,0) == 0){
		        	if(max(check2[i][0].f,0) * max(check2[i][0].t,0) == 0 && max(check2[i][1].f,0) * max(check2[i][1].t,0) == 0){
			        	r2 = 1;
			        	t = 1;
			        	break;
			        }
			        if(max(check2[i][0].f,0) * max(check2[i][0].t,0) == 0){
			        	for(int k = 0;k < n;k++){
			        		if(k != i)check2[k][0].f -= check2[i][0].f,check2[k][0].t -= check2[i][0].t;
						}
					}else{
						for(int k = 0;k < n;k++){
			        		if(k != i)check2[k][1].f -= check2[i][1].f,check2[k][1].t -= check2[i][1].t;
						}
					}
				}
		    }
	    }
	    if(!r2){
	    	return 0;
		}
		if(t) return 1;
	}
}

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
		bool us[105] = {0};
		if(!ok(check2,us,n)) r = 0;
		if(r) cout << "OK" << endl;
		else cout << "LIE" << endl;
	}

	return 0;
}

