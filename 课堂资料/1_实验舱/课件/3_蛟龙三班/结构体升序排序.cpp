bool cmp(stu x,stu y){
	if(x.s!=y.s) return x.s>y.s;
	return x.id<y.id;
}

sort(a+1,a+n+1,cmp);

//½á¹¹ÌåÉıĞòÅÅĞò 
