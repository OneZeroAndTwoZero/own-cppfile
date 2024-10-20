#include<bits/stdc++.h>
using namespace std;

struct mo{
	int step;
	string s;
};
string t,fr = "",to = "123456789";
unordered_map<string,bool> ok;

string z(string in,int x){
	string re = in;
	swap(re[3 * x],re[3 * x + 2]);
	swap(re[3 * x],re[3 * x + 1]);
	return re;
}

string y(string in,int x){
	string re = in;
	swap(re[3 * x],re[3 * x + 1]);
	swap(re[3 * x],re[3 * x + 2]);
	return re;
}
string s(string in,int x){
	string re = in;
	swap(re[0 + x],re[3 + x]);
	swap(re[3 + x],re[6 + x]);
	return re;
}
string x(string in,int x){
	string re = in;
	swap(re[3 + x],re[6 + x]);
	swap(re[0 + x],re[3 + x]);
	return re;
}

int bfs(){
	queue<mo> q;
	q.push({0,fr});
	ok[fr] = 1;
	while(q.size()){
		mo tem = q.front();
		if(tem.s == to){
			return tem.step;
		}
		q.pop();
		for(int i = 0;i < 3;i++){
			string ts = z(tem.s,i);
			if(!ok[ts]){
				q.push({tem.step + 1,ts});
				ok[ts] = 1;
			}
		}
		for(int i = 0;i < 3;i++){
			string ts = s(tem.s,i);
			if(!ok[ts]){
				q.push({tem.step + 1,ts});
				ok[ts] = 1;
			}
		}
		for(int i = 0;i < 3;i++){
			string ts = y(tem.s,i);
			if(!ok[ts]){
				q.push({tem.step + 1,ts});
				ok[ts] = 1;
			}
		}
		for(int i = 0;i < 3;i++){
			string ts = x(tem.s,i);
			if(!ok[ts]){
				q.push({tem.step + 1,ts});
				ok[ts] = 1;
			}
		}
	}
	return -1;
}

int main(){
	for(int i = 0;i < 3;i++){
		cin >> t;
		fr = fr + t;
	}
	printf("%d\n",bfs());

	return 0;
}

