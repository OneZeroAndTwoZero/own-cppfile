#include<bits/stdc++.h>
using namespace std;

struct xs{
	string name;
	int fs,id;
}a[1005];

bool cmp(xs a,xs b){
	if(a.fs != b.fs){
		return a.fs > b.fs;
	}
	return a.id < b.id;
}

int main(){
	int n;
	cin >> n;
	int k = 0;
	for(int i = 0;i < n;i++){
		string tem;
		int cj;
		cin >> tem >> cj;
		if(cj != 0){
			a[k].name = tem,a[k].fs = cj,a[k].id = k++;
		}
	}
	sort(a,a + k,cmp);
	int z = 0;
	for(int i = 0;i < k;i++){
		z += a[i].fs;
	}
	double pj = (double)z / (double)k;
	printf("%.2lf\n",pj);
	cout << a[0].name << " " << a[0].fs << endl;
	cout << a[k - 1].name << " " << a[k - 1].fs << endl;

	return 0;
}

