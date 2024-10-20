int a[10000];
int binary_search(int x,int n){
	int f = 0,e = n - 1;
	while(f <= e){
		int mid = (f + e) / 2;
		if(a[mid] == x) return mid;
		else if(x > a[mid]) f = mid + 1;
		else e = mid - 1;
	}
	return -1;
}
