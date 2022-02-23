#include<stdio.h>
#include<windows.h>
#include<string.h>
int count = 1;
char keyword[20];

struct Score//一个结构体
{
	int num;  	//学号 
	char name[10];  //姓名 
	int cpp;		//C成绩 
	int math;		//高数成绩 
	int english;		//英语成绩 
	int sum; //三科成绩总分
}stu[101];

void  SetPos(int  x, int  y)//设置光标位置
{

	COORD  point = { x ,  y };
	HANDLE  HOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(HOutput, point);
}

void error()//闪红
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

void enter()//闪绿
{
	system("color 21");
	Sleep(800);
	system("color 71");
}

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
	case 3://查询菜单
		printf("  [学生成绩查询]\n -------------------------------------------------\n");
		printf("    __________________   ____   ____       ____\n");
		printf("  |                    | 搜索 | 编辑 |   | 退出 |\n");
		printf("    ------------------   ----   ----       ----\n");
		printf("\n   姓名：");
		printf("\n");
		printf("\n   学号：");
		printf("\n");
		printf("\n  C成绩：");
		printf("\n");
		printf("\n   数学：");
		printf("\n");
		printf("\n   英语：          总分：");
		printf("\n");
		printf(" -------------------------------------------------\n  [选择] 数字或方向键    [确定] 回车\n");
		break;
	case 4://录入菜单
		printf("  [学生成绩录入]\n --------------------------------------------------\n");
		printf("\n   姓名：");
		printf("\n");
		printf("\n   学号：");
		printf("\n");
		printf("\n  C成绩：");
		printf("\n");
		printf("\n   数学：");
		printf("\n");
		printf("\n   英语：");
		printf("\n");
		printf("\n   保存并继续    保存并退出");
		printf("\n");
		printf("\n");
		printf(" -------------------------------------------------\n  [选择] 方向键    [确定] 回车\n");
		break;
	case 5://欢迎界面
		printf("  [学生成绩管理系统]\n -------------------------------------------------\n");
		printf("\n");
		printf("\n\t\t###############");
		printf("\n\t\t# 学 生 成 绩 #");
		printf("\n\t\t# 管 理 系 统 #");
		printf("\n\t\t###############");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf(" -------------------------------------------------\n  [确定] 回车\n");
		break;

	default:
		break;
	}

}

void printbox(int x, int y, int a, int b)//打印个框，xy锚点坐标，ab框的长宽
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

void password()//密码确认
{
	int password = 02;//密码
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
	printmenu(1);
	printbox(2, 3, 10, 6);
	SetPos(1, 17);
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

int search2(int code)
{
	int num = 0;
	int comper = 1;

	switch (code)
	{
	case 1:
		SetPos(3, 3); printf("               ");
		SetPos(3, 3);
		gets(keyword);
		return 0;
	case 2:
		if (keyword[0] >= '0' && keyword[0] <= '9')
			num = atoi(keyword);
		else
		{
			while (comper)
			{
				if (strcmp(keyword, stu[num].name) == 0)
				    comper = 0;
				else
				    num += 1;
			}
		}
		SetPos(9, 6); printf("                ");
		SetPos(9, 8); printf("                ");
		SetPos(9, 10); printf("                ");
		SetPos(9, 12); printf("                ");
		SetPos(9, 14); printf("                ");
		SetPos(9, 6);puts(stu[num].name);
		SetPos(9, 8);printf("%d",stu[num].num);
		SetPos(9, 10);printf("%d",stu[num].cpp);
		SetPos(9, 12);printf("%d", stu[num].math);
		SetPos(9, 14);printf("%d", stu[num].english);
		SetPos(27, 14); printf("%d", stu[num].sum);
		return 0;

	default:
		break;
	}

}

void search()
{
	system("cls");
	printmenu(3);
	printbox(3, 3, 22, 3);
	SetPos(1, 17);
	int code = 1, ch, check = 0;//code指功能代码 
	while (check == 0)//用方向键选择功能
	{
		ch = getch();
		switch (code)//抹掉框框
		{
		case 1:
			printspace(3, 3, 22, 3);
			break;
		case 2:
			printspace(24, 3, 8, 3);
			break;
		case 3:
			printspace(31, 3, 8, 3);
			break;
		case 4:
			printspace(42, 3, 8, 3);
			break;
		default:
			break;
		}
		SetPos(1, 17);
		switch (ch)
		{
		case 75://left
			if (code == 1)
				code = 4;
			code -= 1;
			break;
		case 77://right
			if (code == 4)
				code = 1;
			code += 1;
			break;
		case 13:
			check = search2(code);
			break;
		default:
			break;
		}

		switch (code)//打印框框
		{
		case 1:
			printbox(3, 3, 22, 3);
			break;
		case 2:
			printbox(24, 3, 8, 3);
			break;
		case 3:
			printbox(31, 3, 8, 3);
			break;
		case 4:
			printbox(42, 3, 8, 3);
			break;
		
		default:
			break;
		}
		SetPos(1, 17);

	}
	switch (code)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}

}

int LuRu2(int code)
{
	int num=0;
	switch (code)
	{
	case 1:
		SetPos(9, 3);
		gets(stu[100].name);
		return 0;
	case 2:
		SetPos(9, 5);
		scanf_s("%d", &stu[100].num);
		return 0;
	case 3:
		SetPos(9,7);
		scanf_s("%d",&stu[100].cpp);
		return 0;
	case 4:
		SetPos(9, 9);
		scanf_s("%d", &stu[100].math);
		return 0;
	case 5:
		SetPos(9, 11);
		scanf_s("%d", &stu[100].english);
		return 0;
	case 6:
		num = stu[100].num;
		strcpy_s(stu[num].name, strlen(stu[100].name) + 1, stu[100].name);
		stu[num].num = stu[100].num;
		stu[num].cpp = stu[100].cpp;
		stu[num].math = stu[100].math;
		stu[num].english = stu[100].english;
		stu[num].sum = stu[100].cpp + stu[100].math + stu[100].english;
		SetPos(9, 3); printf("                ");
		SetPos(9, 5); printf("                ");
		SetPos(9, 7); printf("                ");
		SetPos(9, 9); printf("                ");
		SetPos(9, 11); printf("                ");
		return 0;
	case 7:
		num = stu[100].num;
		strcpy_s(stu[num].name,strlen(stu[100].name)+1,stu[100].name);
		stu[num].num = stu[100].num;
		stu[num].cpp = stu[100].cpp;
		stu[num].math = stu[100].math;
		stu[num].english = stu[100].english;
		stu[num].sum = stu[100].cpp + stu[100].math + stu[100].english;
		return 1;
	default:
		break;
	}

}

void LuRu()
{
	system("cls");
	printmenu(4);
	printbox(9, 3, 20, 3);
	SetPos(1, 17);
	int code = 1, ch, check = 0;//code指功能代码 
	while (check == 0)//用方向键选择功能
	{
		ch = getch();
		switch (code)//抹掉框框
		{
		case 1:
			printspace(9, 3, 20, 3);
			break;
		case 2:
			printspace(9, 5, 20, 3);
			break;
		case 3:
			printspace(9, 7, 20, 3);
			break;
		case 4:
			printspace(9, 9, 20, 3);
			break;
		case 5:
			printspace(9, 11, 20, 3);
			break;
		case 6:
			printspace(2, 13, 14, 3);
			break;
		case 7:
			printspace(16, 13, 14, 3);
			break;
		default:
			break;
		}
		SetPos(1, 17);
		switch (ch)
		{
        case 72://up
			if (code == 1)
				code = 6;
			else if (code == 7)
				code = 5;
			else
				code -= 1;
			break;
		case 80://down
			if (code >= 6)
				code = 1;
			else
				code += 1;
			break;
		case 75://left
			if (code ==6)
				code = 7;
			else
			    code -= 1;
			break;
		case 77://right
			if (code == 7)
				code = 6;
			else
				code += 1;
			break;
		case 13:
			check = LuRu2(code);
		default:
			break;
		}

		switch (code)//打印框框
		{
		case 1:
			printbox(9, 3, 20, 3);
			break;
		case 2:
			printbox(9, 5, 20, 3);
			break;
		case 3:
			printbox(9, 7, 20, 3);
			break;
		case 4:
			printbox(9, 9, 20, 3);
			break;
		case 5:
			printbox(9, 11, 20, 3);
			break;
		case 6:
			printbox(2, 13, 14, 3);
			break;
		case 7:
			printbox(16, 13, 14, 3);
			break;
		default:
			break;
		}
		SetPos(1, 17);
		
	}
	
}

int main()
{
	system("mode con cols=51 lines=18");
	system("color 71");
	system("title 学生成绩管理系统");//以上改变窗口颜色 大小 标题
	printmenu(5);
	getch();
	password();
	

	int code = 1;
	

	

	while (code != 8)
	{
     
		code = mainmenu();//1查询 2录入 3编辑 4统计 5显示 6存取 7关于 8退出
		switch (code)
		{
		case 1:
			search();
			break;
		case 2:
			LuRu();
			break;
		
		default:
			break;
		}

	}
	

    return 0;
}