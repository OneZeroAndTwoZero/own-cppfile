#include<bits/stdc++.h>
using namespace std;

struct wang{
	int p1,p2,p3,p4;
	friend wang operator &(const wang &a,const wang &b){
		b.p1  = p1 & a.p1;
		b.p2  = p2 & a.p2;
		b.p3  = p3 & a.p3;
		b.p4  = p4 & a.p4;
		return {b.p1,b.p2,b.p3,b.p4};
	}
};

int main(){

	return 0;
}

