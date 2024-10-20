void mpsort(){
	bool pd;
	for(int i=1;i<n;i++){
		pd=false
		for(int j=1;j<=n-i;j++){
			if(a[j]<a[j+1]) {
				swap(a[j],a[j+1]);
				pd=true;
			}
		}
		if(pd==false) break;
	}	
}
