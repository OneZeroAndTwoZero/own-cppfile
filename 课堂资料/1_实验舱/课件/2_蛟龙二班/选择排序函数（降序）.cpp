void xzsort()
{
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n-i;j++){
			if(a[i]<a[j]) swap(a[i],a[j]);
		}
	}
}
