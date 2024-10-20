#include<bits/stdc++.h>
using namespace std;

struct ren{
	int id,num,g;
	bool operator <(const ren &a) const{
		if(num != a.num) return num < a.num;
		return id < a.id;
	}
	ren(int ID,int NUM,int G){
		id = ID,num = NUM,g = G;
	}
};

vector<ren> a;

int main(){
	int n,m;
	cin >> n >> m;
	int sum = 0,tem = 1;
	for(int i = 0;i < n;i++){
		int n,g;
		cin >> n >> g;
		a.push_back(ren(i + 1,n,g));
		sum += a[i].g;
		tem = i + 1;
		if(sum >= m){
			break;
		}
	}
	cout << tem << endl;
	sort(a.begin(),a.end());
	for(int i = 0;i < a.size();i++){
		cout << a[i].id << " ";
	}

	return 0;
}

