string jr(int x){
	string ans="";
	if(x==0) return "0";
	while(x>0){
		ans=char(x%2+'0')+ans;
		x/=2;
	}
	return ans;
}
