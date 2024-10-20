#include<bits/stdc++.h>
using namespace std;

struct s{
	int yes,no;
};

s a[105][2];
int ji[105][105] = {0};
bool r[105] = {0};
int an[105] = {0};

void cz(){
	for(int i= 0;i < 105;i++){
		for(int j = 0;j < 2;j++){
			a[i][j].yes = 0,a[i][j].no = 0;
			
		}
		r[i] = 0;
		an[i] = 0;
		for(int j = 0;j < 105;j++){
			ji[i][j] = 0;
		}
	}
}

bool ok(int n,int m){
	for(int i = 0;i < n * n + 1;i++){
		int h = i % n;
		if(!r[h]){
			if(a[h][0].no * a[h][0].yes == 0 && a[h][1].yes * a[h][1].no == 0) return 1;
			if(a[h][0].no * a[h][0].yes == 0){
				for(int i = 0;i < n;i++){
					if(!r[i]){
						for(int j = 0;j < m;j++){
							if(ji[j][h] == 0){
								if(an[j] == 0){
									a[i][0].yes = 0;
								}else{
									a[i][0].no = 0;
								}
							}
						}
					}
				}
				r[h] = 1;
			}
			if(a[h][1].no * a[h][1].yes == 0){
				for(int i = 0;i < n;i++){
					if(!r[i]){
						for(int j = 0;j < m;j++){
							if(ji[j][h] == 1){
								if(an[j] == 0){
									a[i][1].yes = 0;
								}else{
									a[i][1].no = 0;
								}
							}
						}
					}
				}
				r[h] = 1;
			}
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t --){
		cz();
		int n,m;
		cin >> n >> m;
		for(int i = 0;i < m;i++){
			string s;
			int ans;
			cin >> s >> ans;
			an[i] = 0;
			for(int j = 0;j < n;j++){
				if(ans) a[j][s[j] - '0'].yes ++;
				else a[j][s[j] - '0'].no ++;
				ji[i][j] = s[j] - '0';
			}
		}
		if(ok(n,m)){
			cout << "OK" << endl;
		}else{
			cout << "LIE" << endl;
		}
	}

	return 0;
}

