#include<bits/stdc++.h>
using namespace std;

struct node{
	string si;
	int num[101] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	bool operator < (const node &f) const{
		for(int i = 0;i < 11;i ++){
			if(num[i] != f.num[i])
				return num[i] < f.num[i];
		}
	}
};

int turn(string d){
	int res = 0;
	for(int i = 0;i < d.size();i ++){
		res = res * 10 + d[i] - '0';
	}
	return res;
}

int n,cnt;
string s,t;
node a[1005];

int main(){
	cin >> n;
	for(int k = 0;k < n;k ++){
		cin >> s;
		a[k].si = s;
		s = s + ".";
		t = "",cnt = 0;
		for(int i = 0;i < s.size();i ++){
			if(s[i] == '.'){
				a[k].num[cnt] = turn(t);
				cnt ++;
				t = "";
			}else{
				t = t + s[i];
			}
		}
	}
	sort(a,a + n);
	for(int i = 0;i < n;i ++){
		cout << a[i].si << endl;
	}
	
	return 0;
} 
