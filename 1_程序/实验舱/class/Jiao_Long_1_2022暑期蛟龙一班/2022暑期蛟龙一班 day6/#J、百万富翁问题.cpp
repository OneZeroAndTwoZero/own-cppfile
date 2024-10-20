#include<bits/stdc++.h>
using namespace std;

int m_g = 10;
long long f_g = 1,m_z = 0,f_z = 0;

int main(){
	for(int i = 0;i < 30;i++){
		m_z += m_g;
		f_z += f_g;
		f_g *= 2;
	}
	cout << m_z << " " << f_z  << endl;
	
	return 0;
} 
