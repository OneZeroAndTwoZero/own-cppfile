#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
 
int main() {
    
    int n,k;
    cout << "�����������(��λ:����)(�����,10����):" << endl;
    cin >> k;
    cout << "���������ܴ���:" << endl;
    cin >> n;
	
	for(int i = 1; i <= n; i++) {
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//�������
		Sleep(10);                                   //Ҫ��������Ϣ��ʱ�䣬û��Ҳ���ԣ����������
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//�ɿ����
		Sleep(k);
	}
    
    return 0;
}
