#include<stdio.h>
#include<windows.h>
int main(){
    while(1){
        if(GetAsyncKeyState(VK_SPACE)){//按下空格，开始执行
            while(1){
                mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);
                Sleep(10);
                if(GetAsyncKeyState(VK_ESCAPE)) return 0;
                if(GetAsyncKeyState(VK_SPACE)){
                	Sleep(100);
					break; 
				}
            }
        }
    }
    return 0;
}
