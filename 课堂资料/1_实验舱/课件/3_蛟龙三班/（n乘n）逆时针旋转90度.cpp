void Tn90(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[n+1-j][i]=a[i][j];
		}
	}
}
