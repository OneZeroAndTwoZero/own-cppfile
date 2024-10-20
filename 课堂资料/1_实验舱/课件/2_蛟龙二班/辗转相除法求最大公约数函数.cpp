int gcd(int x,int y){
	int yu=x%y;
	while(yu>0){
		x=y;
		y=yu;
		yu=x%y;
	}
	return y;
}
