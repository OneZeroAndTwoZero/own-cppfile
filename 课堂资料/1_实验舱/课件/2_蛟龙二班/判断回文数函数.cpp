int PRC(int x){
	int s,c=0;
	s=x;
	while(s!=0){
		c=c*10+s%10;
		s/=10;
	}
	if(c==x) return 1;
	else return 0;
	
}
