#include<bits/stdc++.h>
using namespace std;

int y,s,w;
int n;

struct ren{
	string name;
	int zong;
	double avg;
};

int main(){
	ren max,now;
	max.zong = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> now.name;
		cin >> y >> s >> w;
		now.zong = y + s + w;
		now.avg = now.zong / 3.0;
		if(now.zong > max.zong){
			swap(now,max);
		}
	}
	cout << max.name << " " << max.zong << " ";
	printf("%.2lf\n",max.avg);

	return 0;
}

