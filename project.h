#pragma once
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include"winsystem.h"
#include"printmenu.h"

void password()//密码确认
{
	int password = 88888888;//密码
	int scan = 0;
	while (1)
	{
		system("cls");
		printmenu(2);
		SetPos(8, 8);
		scanf_s("%d", &scan);
		if (scan == password)
		{
			enter();
			system("cls");
			break;//运行到这里代表密码正确
		}
		error();
	}

}

int mainmenu()//主菜单界面
{
	int code = 1, ch, check = 0;//code指功能代码
	while (check == 0)//用方向键选择功能
	{
		ch = getch();
		switch (code)//抹掉框框
		{
		case 1:
			printspace(2, 3, 10, 6);
			break;
		case 2:
			printspace(15, 3, 10, 6);
			break;
		case 3:
			printspace(28, 3, 10, 6);
			break;
		case 4:
			printspace(41, 3, 10, 6);
			break;
		case 5:
			printspace(2, 10, 10, 6);
			break;
		case 6:
			printspace(15, 10, 10, 6);
			break;
		case 7:
			printspace(28, 10, 10, 6);
			break;
		case 8:
			printspace(41, 10, 10, 6);
			break;
		default:
			break;
		}
		SetPos(1, 17);
		switch (ch)
		{
		case 72://up
			if (code <= 4)
				code += 4;
			else
				code -= 4;
			break;
		case 80://down
			if (code <= 4)
				code += 4;
			else
				code -= 4;
			break;
		case 75://left
			if (code == 1 || code == 5)
				code += 4;
			code -= 1;
			break;
		case 77://right
			if (code == 4 || code == 8)
				code -= 4;
			code += 1;
			break;
		case 49://数字键
			code = 1;
			break;
		case 50:
			code = 2;
			break;
		case 51:
			code = 3;
			break;
		case 52:
			code = 4;
			break;
		case 53:
			code = 5;
			break;
		case 54:
			code = 6;
			break;
		case 55:
			code = 7;
			break;
		case 56:
			code = 8;
			break;
		case 97://部分键盘有两种数字键
			code = 1;
			break;
		case 98:
			code = 2;
			break;
		case 99:
			code = 3;
			break;
		case 100:
			code = 4;
			break;
		case 101:
			code = 5;
			break;
		case 102:
			code = 6;
			break;
		case 103:
			code = 7;
			break;
		case 104:
			code = 8;
			break;
		case 13:
			check = 1;
			break;
		default:
			break;
		}

		switch (code)//打印框框
		{
		case 1:
			printbox(2, 3, 10, 6);
			break;
		case 2:
			printbox(15, 3, 10, 6);
			break;
		case 3:
			printbox(28, 3, 10, 6);
			break;
		case 4:
			printbox(41, 3, 10, 6);
			break;
		case 5:
			printbox(2, 10, 10, 6);
			break;
		case 6:
			printbox(15, 10, 10, 6);
			break;
		case 7:
			printbox(28, 10, 10, 6);
			break;
		case 8:
			printbox(41, 10, 10, 6);
			break;
		default:
			break;
		}
		SetPos(1, 17);
	}
	return code;
}