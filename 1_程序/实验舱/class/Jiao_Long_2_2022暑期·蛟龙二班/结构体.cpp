struct qq{
	int x, y;
	bool operator < (const qq & xxx) const{
		return x<xxx.x;
	}
};
