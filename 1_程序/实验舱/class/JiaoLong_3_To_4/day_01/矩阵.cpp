#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int max = -50;
	int max_s = 0;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			int tem;
			cin >> tem;
			int a1 = i + 1,a2 = j + 1,a3 = n - i,a4 = m - j;
			int h = a1 > a3 ? a1 : a3;
			int w = a2 > a4 ? a2 : a4;
			int s = h * w;
			if(tem > max){
				max = tem;
				max_s = s;
			}else if(tem == max){
				if(s < max_s) max_s = s;
			}
		}
	}
	cout << max_s << endl;

	return 0;
}
