#include<stdio.h>
#include<windows.h>
#include<string.h>
#include"project.h"
#include"printmenu.h"

int main()
{
	
	system("mode con cols=51 lines=18");
	system("color 71");
	system("title 学生成绩管理系统");//以上改变窗口颜色 大小 标题
	password();
	printmenu(1);
	printbox(2,3,10,6);
	SetPos(1, 17);

	int code = 1;
	struct Score//一个结构体
	{
		char num[12];  	//学号 
		char name[10];  //姓名 
		int cpp;		//C成绩 
		int math;		//高数成绩 
		int english;		//英语成绩 
		int sum; //三科成绩总分
	}stu[100];

	

	while (code != 8)
	{
     
		code = mainmenu();//1查询 2录入 3编辑 4统计 5显示 6存取 7关于 8退出

	}
	

    return 0;
}