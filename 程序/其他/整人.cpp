#include <windows.h>
#include <iostream>

using namespace std;

//----------ȫ��/���ر�����----------
void full_screen() {
	HWND hwnd = GetForegroundWindow();
	//----------��Ļ�ֱ���----------
	int cx = GetSystemMetrics(SM_CXSCREEN);
	int cy = GetSystemMetrics(SM_CYSCREEN);

	LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);   //��ȡ������Ϣ
	SetWindowLong(hwnd,GWL_STYLE,
	              (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME &
	              ~WS_BORDER);
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}
//----------���ع��----------
void HideTheCursor() {
	CONSOLE_CURSOR_INFO cciCursor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	if(GetConsoleCursorInfo(hStdOut, &cciCursor)) {
		cciCursor.bVisible = FALSE;
		SetConsoleCursorInfo(hStdOut, &cciCursor);
	}
}

int main() {
	system("mode 1000,30");

	//----------�Ƴ����ٱ༭ģʽ(����win10�û�)----------
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);

	//----------���ع��----------
	HideTheCursor();

	//----------�������弰��ɫ----------
	system("color 1F");

	//----------�ƶ�����----------
	RECT rect;
	HWND hwnd=GetForegroundWindow();
	GetWindowRect(hwnd,&rect);
	MoveWindow(hwnd,-30,-7,8600,1080,TRUE);

	//----------ȫ��----------
	full_screen();

	//----------��ӡ��������----------
	cout<<"A problem has been detected and windows has been shut\
down to prevent damage\n\
to your computer.\n\n\
DRIVER_IROL_NOT_LESS_OR_EQUAL\n\n\
If this is the first time you've seen this Stop error screen, \n\
restart your computer.If this screen appears again, follow \n\
these steps:\n\n\
Sing,Dance,rap and Playing basketball\n\
Check to make sure any new hardware or software is properly installed.\n\
If this is a new installation, ask your hardware or software manufacturer\n\
for any windows updates you might need.\n\n\
If problems continue. disable or remove any newly installed hardware\n\
or software. Disable BIOS memory option such as caching or shadowing.\n\
If you need to nsu Safe Mode to remove or disable components, restart\n\
your computer, press F8 to select Advanced Startup Options, and then\n\
select Safe Mode.\n\n\
Technical information:\n\
\"\"\"STOP:0x00000050��0xFD3094c2,0x00000001,0xFBFE7617,0x00000000��\n\n\
\"\"\"SPCMDON.SYS - Address FBFE7617 base at FBFE5000, DateStamp 3d6dd67c"<<endl;
 
	//----------ֹͣ���򣨲��˳���----------
	while(1) {
		//----------�ٴ����ع��----------
		HideTheCursor();
//		SetCursorPos(2000,2000);
//		������꣨��������밴Alt+F4�رգ�
	}
	return 0;
}//���˴���
