#include<bits/stdc++.h>
using namespace std;

struct go{
	int d;
	string place;
};
struct city{
	int Id,d;
	string Place;
	bool operator < (const city &y) const{
		if(d != y.d) return d > y.d;
		return Id>y.Id;
	}
};

city P[101];
go a[105];
int n,m,em,ed,k,l,t;
int dir[15]={0,31,29,31,30,31,30,31,31,30,31,30,31};
char x;
string s,color;
map<string,char> zhao;

int cz(int a,int b){
	int cnt = 0;
	for(int i = 1;i < a;i ++){
		cnt += dir[i];
	}
	if(a == 12) cnt -= 366;
	return cnt + b;
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i ++){
		cin >> s >> x;
		zhao[s] = x;
	}
	cin >> m;
	for(int i = 0;i < m;i ++){
		cin >> em >> x >> ed >> a[i].place;
		a[i].d = cz(em,ed);
	}
	cin >> em >> x >> ed;
	
	color = "Green";
	for(int i = 0;i < m;i++){
		if(cz(em,ed) - a[i].d <= 14){
			if(zhao[a[i].place] == 'H'){
				color="Red";
			}else if(zhao[a[i].place] == 'M' && color == "Green"){
				color="Yellow";
			}
			l=0;
			for(int j = 0;j < k;j ++){
				if(P[j].Place == a[i].place){
					l=1;
					P[j].d = max(P[j].d,a[i].d);
					break;
				}
			}
			if(!l){
				P[k].Place = a[i].place;
				P[k].Id = k;
				P[k].d = a[i].d;
				k++;
			}
		}
	}
	
	cout<< color <<endl;
	sort(P,P + k);
	for(int i = 0;i < k;i ++){
		cout<< P[i].Place;
		if(zhao[P[i].Place] == 'M' || zhao[P[i].Place] == 'H'){
			cout << '(' << zhao[P[i].Place] << ')';
		}
		if(i < k-1){
			cout << ',';
		}
	}
	cout << endl;
	
	return 0;
}
