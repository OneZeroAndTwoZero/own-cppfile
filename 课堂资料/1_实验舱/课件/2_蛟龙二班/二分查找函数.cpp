int bfind(int L,int R,int x){
	while(L<=R){
		int mid=(L+R)/2;
		if(x==a[mid]) return mid;
		if(x<a[mid]) R=mid-1;
		else L=mid+1;
	}
	return -1;
}
//���ֲ���ǰ��Ҫ����
//����ֵ��λ�� 
