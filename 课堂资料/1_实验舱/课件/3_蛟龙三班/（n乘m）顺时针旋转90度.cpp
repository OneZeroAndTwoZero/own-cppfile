void Ts90(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[j][n+1-i]=a[i][j];
		}
	}
}
