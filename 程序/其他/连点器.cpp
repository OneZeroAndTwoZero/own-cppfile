#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
 
int main() {
    
    int n,k;
    cout << "请输入点击间隔(单位:毫秒)(阳间点,10以上):" << endl;
    cin >> k;
    cout << "请输入点击总次数:" << endl;
    cin >> n;
	
	for(int i = 1; i <= n; i++) {
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//按下左键
		Sleep(10);                                   //要给电脑休息的时间，没有也可以，但会更卡！
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//松开左键
		Sleep(k);
	}
    
    return 0;
}
