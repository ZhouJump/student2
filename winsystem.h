#include<stdio.h>
#include<windows.h>
#include<string.h>

void  SetPos(int  x, int  y)//���ù��λ��
{

    COORD  point = { x ,  y }; 
    HANDLE  HOutput = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleCursorPosition(HOutput, point); 
}

void error()//����
{
	system("color 41");
	Sleep(300);
	system("color 71");
	Sleep(300);
	system("color 41");
	Sleep(300);
	system("color 71");
	Sleep(300);
	system("color 41");
	Sleep(300);
	system("color 71");
}

void enter()//����
{
	system("color 21");
	Sleep(800);
	system("color 71");
}
