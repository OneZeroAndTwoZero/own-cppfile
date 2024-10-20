#include<bits/stdc++.h>
using namespace std;

int a[2002][2002] = {0};
int x = 114514;

void p(int i,int j,int tem){
	if(a[i][j] != 0){
		int cz = tem - a[i][j];
		if(cz < x) x = cz;
	}
} 

struct cao{
	char fx;
	int d;
};

cao c[102];

int main(){
	int n;
	cin >> n;
	int i = 1000,j = 1000,tem = 1;
	for(int s = 0;s < n;s++){
		cin >> c[s].fx;
		cin >> c[s].d;
		if(c[s].fx == 'E'){
			for(int k = j + 1;k - j <= c[s].d;k++){
				p(i,k,tem);
				a[i][k] = tem;
				tem++;
			}
			j += c[s].d;
		}else if(c[s].fx == 'W'){
			for(int k = j - 1;j - k <= c[s].d;k--){
				p(i,k,tem);
				a[i][k] = tem;
				tem++;
			}
			j -= c[s].d;
		}else if(c[s].fx == 'N'){
			for(int k = i - 1;i - k <= c[s].d;k--){
				p(k,j,tem);
				a[k][j] = tem;
				tem++;
			}
			i -= c[s].d;
		}else{
			for(int k = i + 1;k - i <= c[s].d;k++){
				p(k,j,tem);
				a[k][j] = tem;
				tem++;
			}
			i += c[s].d;
		}
	}
	if(x == 114514) cout << -1 << endl;
	else cout << x << endl;

	return 0;
}


