#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int fz,fm;
	int z_i = 2,m_i = 2;
	int z_j = 1,m_j = 1;
	for(int i = 1;i <= n;i++){
		if(z_j > z_i){
			z_i += 2;
			z_j = 1;
		}
		if(m_j > m_i){
			m_i += 2;
			m_j = 1;
		}
		z_j ++;
		m_j ++;
	}
	cout << z_j - 1 << "/" << m_i + 1 << endl;
	
	return 0;
}
