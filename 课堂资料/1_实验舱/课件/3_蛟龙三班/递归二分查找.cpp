int bfind(int l,int r,int x){
	int m=(l+r)/2;
	if(l>r) return -1;
	if(x==a[m]) return m;
	if(a[m]>x) return bfind(l,m-1,x);
	else return bfind(m+1,r,x);
}
