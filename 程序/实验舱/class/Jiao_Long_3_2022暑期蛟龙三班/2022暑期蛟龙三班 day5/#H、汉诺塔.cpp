#include<bits/stdc++.h>
using namespace std;

char name[3] = {'X','Y','Z'};
int now = 1,n;

void out(int n,int g1,int g2){
	printf("��%d������%d��%c���ƶ���%c��\n",now,n,name[g1],name[g2]);
	now ++;
}

void move(int n,int s,int z,int e){
	if(n < 1) return;
	move(n - 1,s,e,z);
	out(n,s,e);
	move(n - 1,z,s,e);
}

int main(){
	cin >> n;
	move(n,0,2,1);

	return 0;
}

