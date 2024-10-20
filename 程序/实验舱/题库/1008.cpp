#include<bits/stdc++.h>
using namespace std;

char a[55][55];

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		int md_i,md_j,qd_i,qd_j;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				cin >> a[i][j];
				if(a[i][j] == 'S'){
					qd_i = i,qd_j = j;
				}
				if(a[i][j] == 'T'){
					md_i = i,md_j = j;
				}
			}
		}
		int q;
		int i1 = qd_i,j1 = qd_j;
		cin >> q;
		while(q --){
			i1 = qd_i,j1 = qd_j;
			bool t = 0;
			string s;
			cin >> s;
			for(int i = 0;i < s.size();i ++){
				if(s[i] == 'L'){
					i1 --;
				}else if(s[i] == 'R'){
					i1 ++;
				}else if(s[i] == 'U'){
					j1 --;
				}else{
					j1 ++;
				}
				if(i1 < 0 || j1 < 0 || i1 >= n || j1 >= n){
					cout << "I am out!" << endl;
					t = 1;
					break;
				}else if(a[i1][j1] == '#'){
					cout << "I am dizzy!" << endl;
					t = 1;
					break;
				}
			}
			if(!t){
				if(a[i1][j1] == 'T'){
					cout << "I get there!" << endl;
				}else{
					cout << "I have no idea!" << endl;
				}
			}
		}
	}

	return 0;
}

