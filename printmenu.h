#pragma once
#include<stdio.h>
#include<windows.h>
#include<string.h>

void printmenu(int no)//打印标题
{
	switch (no)
	{
	case 0:
		break;
	case 1://主菜单
		printf("  [学生成绩管理系统]\n -------------------------------------------------\n");
		printf("   ____ _       ______       ______       ______\n");
		printf("  |/  ;\\ |     | ==== |     | | |  |     | + 40 |\n");
		printf("  |\\_ _/ |     |      |     | |_|  |     | + 30 |\n");
		printf("  |  \\\\  |     |______|     | \\ / _|     | = 70 |\n");
		printf("  |___\\\\_|     (______(     |__▼_|/     |______| \n");
		printf("   1.查询       2.录入       3.编辑       4.统计\n");
		printf("\n");
		printf("   ______       _____        ______       ______\n");
		printf("  |list  |     |||_||\\      | ABOUT|     |      |\n");
		printf("  |======|     ||___| |     |\\US   |     | EXIT |\n");
		printf("  |======|     |      |     |\\\\ :) |     |  -→ |\n");
		printf("  |______|     |______|     |_\\\\___|     |______|\n");
		printf("   5.显示       6.存取       7.关于       8.退出\n");
		printf(" -------------------------------------------------\n  [选择] 数字或方向键    [确定] 回车\n");
		break;
	case 2://密码界面
		printf("  [请输入密码]\n -------------------------------------------------\n");
		printf("\n\n\n\n\n\n");
		printf("  密码[                                      ]\n");
		printf("\n\n\n\n\n\n");
		printf(" -------------------------------------------------\n  [输入] 数字键    [确定] 回车\n");
		break;

	default:
		break;
	}
 
}

void printbox(int x, int y,int a,int b)//打印个框，xy锚点坐标，ab框的长宽
{
	x -= 1; y -= 1; a -= 2; b -= 1;
	SetPos(x, y);
	printf("◤");
	SetPos(x + a, y);
	printf("◥");
	SetPos(x, y + b);
	printf("◣");
	SetPos(x + a, y + b);
	printf("◢");
	
}

void printspace(int x, int y, int a, int b)//打印个框，xy锚点坐标，ab框的长宽
{
	x -= 1; y -= 1; a -= 2; b -= 1;
	SetPos(x, y);
	printf("  ");
	SetPos(x + a, y);
	printf("  ");
	SetPos(x, y + b);
	printf("  ");
	SetPos(x + a, y + b);
	printf("  ");

}


