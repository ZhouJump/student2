#include<stdio.h>
#include<windows.h>
#include<string.h>
#include"project.h"
#include"printmenu.h"

int main()
{
	
	system("mode con cols=51 lines=18");
	system("color 71");
	system("title ѧ���ɼ�����ϵͳ");//���ϸı䴰����ɫ ��С ����
	password();
	printmenu(1);
	printbox(2,3,10,6);
	SetPos(1, 17);

	int code;
	struct Score//һ���ṹ��
	{
		char num[12];  	//ѧ�� 
		char name[10];  //���� 
		int cpp;		//C�ɼ� 
		int math;		//�����ɼ� 
		int english;		//Ӣ��ɼ� 
		int sum; //���Ƴɼ��ܷ�
	}stu[100];


	code = mainmenu();
	


	return 0;
}