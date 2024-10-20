#include<bits/stdc++.h>
using namespace std;

int n,m,m_num;
double q,q_long;

int main(){	
	scanf("%d %d",&n,&m);
	m_num = m / 3;
	q_long = 1.8 * 1.5;
	if(n == 0){
		q = m_num;
	}else if(n <= 2){
		q = 6 + m_num;
	}else if(n <= 10){
		q = 6 + (double)(n - 2) * 1.8 + m_num;
	}else{
		q = 6 + 8.0 * 1.8 + (double)(n - 10) * q_long + m_num;
    }
	printf("%.1lf",q);
	
	return 0;
}
