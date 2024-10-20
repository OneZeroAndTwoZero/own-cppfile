#include<bits/stdc++.h>
using namespace std;

int mi[26] = {0};
int now[26] = {0};
int now2[26] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string a,b;
		cin >> a >> b;
		for(int i = 0;i < 26;i++){
			now[i] = 0;
			now2[i] = 0;
		}
		for(int i = 0;i < a.size();i++){
			now[a[i] - 'a'] ++;
		}
		for(int i = 0;i < b.size();i++){
			now2[b[i] - 'a'] ++;
		}
		for(int i = 0;i < 26;i++){
			now[i] = max(now[i],now2[i]);
			mi[i] += now[i];
		}
	}
	for(int i = 0;i < 26;i++){
		cout << mi[i] << endl;
	}

	return 0;
}

