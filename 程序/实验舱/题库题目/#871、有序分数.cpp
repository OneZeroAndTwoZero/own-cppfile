#include<bits/stdc++.h>
using namespace std;

struct node{
	int ai,bi;
	double z;
	bool operator <(const node &a)const{
		return z < a.z;
	}
};

int n,pos = 0;
node a[200005] = {0};

int gcd(int x,int y){
	return y == 0 ? x : gcd(y,x % y);
}

int main(){
	cin >> n;
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= n;j++){
			if(j != 0 && gcd(i,j) == 1 && (double)i / j <= 1){
				a[pos].ai = i,a[pos].bi = j,a[pos ++].z = (double)i / j;
			}
		}
	}
	sort(a,a + pos);
	for(int i = 0;i < pos;i++){
		cout << a[i].ai << "/" << a[i].bi << endl;
	}

	return 0;
}

