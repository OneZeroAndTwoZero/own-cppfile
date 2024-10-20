#include<bits/stdc++.h>
using namespace std;

struct node{
	int id;
	string name;
	int num;
	bool operator < (const node &a) const{
		if(num != a.num) return num > a.num;
		return id < a.id;
	}
};

struct pai{
	int id;
	string name;
	bool operator < (const pai &a) const{
		if(id != a.id) return id < a.id;
		return name < a.name;
	}
};

int n,m = 0;
char c1,c2;
node a[505];
pai f[105];
int t[100005] = {0};

int turn(char c){
	if(c >= '0' && c <= '9') return c - '0';
	return c - 'A' + 10;
}

char turn2(int a){
	if(a >= 0 && a <= 9) return (char)(a + '0');
	return (char)(a + 'A' - 10);
}

string zhao(int x){
	pai tem[105];
	for(int i = 0;i < 105;i ++){
		tem[i].id = 0;
		tem[i].name = "";
	}
	for(int i = 0;i < 16;i ++){
		tem[i].id = abs(f[i].id - x);
		tem[i].name = f[i].name;
	}
	sort(tem,tem + 16);
	return tem[0].name;
}

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif
	
	for(int i = 0;i < 256;i ++){
		a[i].id = i;
		string res = "";
		res = res + turn2(i / 16) + turn2(i % 16);
		a[i].name = res;
	}
	scanf("%d",&n);
	int j = 0;
	for(int i = 0;i < n;i ++){
		while(cin >> c1){
			cin >> c2;
			a[turn(c1) * 16 + turn(c2)].num ++;
			t[j] = turn(c1) * 16 + turn(c2);
			j ++;
		}
	}
	m = (j + 1) / n;
	sort(a,a + 256);
	for(int i = 0;i < 16;i ++){
		string res = "";
		res = res + turn2(i);
		//cout << i << " " << res << endl;
		f[i].name = res;
		f[i].id = a[i].id;
		cout << a[i].name;
	}
	printf("\n");
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < m;j ++){
			cout << zhao(t[i * m + j]);
			//cout << "  " << i << " " << j << " " << t[i * m + j] << " " << zhao(t[i * m + j]) << endl;
		}
		printf("\n");
	}

	return 0;
}

