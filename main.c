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

void printmenu(int no)//��ӡ����
{
	switch (no)
	{
	case 0:
		break;
	case 1://���˵�
		printf("  [ѧ���ɼ�����ϵͳ]\n -------------------------------------------------\n");
		printf("   ____ _       ______       ______       ______\n");
		printf("  |/  ;\\ |     | ==== |     | | |  |     | + 40 |\n");
		printf("  |\\_ _/ |     |      |     | |_|  |     | + 30 |\n");
		printf("  |  \\\\  |     |______|     | \\ / _|     | = 70 |\n");
		printf("  |___\\\\_|     (______(     |__��_|/     |______| \n");
		printf("   1.��ѯ       2.¼��       3.�༭       4.ͳ��\n");
		printf("\n");
		printf("   ______       _____        ______       ______\n");
		printf("  |list  |     |||_||\\      | ABOUT|     |      |\n");
		printf("  |======|     ||___| |     |\\US   |     | EXIT |\n");
		printf("  |======|     |      |     |\\\\ :) |     |  -�� |\n");
		printf("  |______|     |______|     |_\\\\___|     |______|\n");
		printf("   5.��ʾ       6.��ȡ       7.����       8.�˳�\n");
		printf(" -------------------------------------------------\n  [ѡ��] ���ֻ����    [ȷ��] �س�\n");
		break;
	case 2://�������
		printf("  [����������]\n -------------------------------------------------\n");
		printf("\n\n\n\n\n\n");
		printf("  ����[                                      ]\n");
		printf("\n\n\n\n\n\n");
		printf(" -------------------------------------------------\n  [����] ���ּ�    [ȷ��] �س�\n");
		break;
	case 3://��ѯ�˵�
		printf("  [ѧ���ɼ���ѯ]\n ---------------------------------------------------\n");
		printf("   ______       ______       ______\n");
		printf("  |      |     |      |     |      |\n");
		printf("  |      |     |      |     | EXIT |\n");
		printf("  | NAME |     | CODE |     | -->  |\n");
		printf("  |______|     |______|     |______|\n");
		printf("   1.����       2.ѧ��       3.�˳�\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf(" -------------------------------------------------\n  [ѡ��] ���ֻ����    [ȷ��] �س�\n");
		break;
	case 4://¼��˵�
		printf("  [ѧ���ɼ�¼��]\n --------------------------------------------------\n");
		printf("\n   ������");
		printf("\n");
		printf("\n   ѧ�ţ�");
		printf("\n");
		printf("\n  C�ɼ���");
		printf("\n");
		printf("\n   ��ѧ��");
		printf("\n");
		printf("\n   Ӣ�");
		printf("\n");
		printf("\n   ���沢����    ���沢�˳�");
		printf("\n");
		printf("\n");
		printf(" -------------------------------------------------\n  [ѡ��] ���ֻ����    [ȷ��] �س�\n");
		break;
	case 5://��ӭ����
		printf("  [ѧ���ɼ�����ϵͳ]\n ---------------------------------------------------\n");
		printf("\n");
		printf("\n\t\t###############");
		printf("\n\t\t# ѧ �� �� �� #");
		printf("\n\t\t# �� �� ϵ ͳ #");
		printf("\n\t\t###############");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf(" -------------------------------------------------\n  [ȷ��] �س�\n");
		break;

	default:
		break;
	}

}

void printbox(int x, int y, int a, int b)//��ӡ����xyê�����꣬ab��ĳ���
{
	x -= 1; y -= 1; a -= 2; b -= 1;
	SetPos(x, y);
	printf("��");
	SetPos(x + a, y);
	printf("��");
	SetPos(x, y + b);
	printf("��");
	SetPos(x + a, y + b);
	printf("��");

}

void printspace(int x, int y, int a, int b)//��ӡ����xyê�����꣬ab��ĳ���
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

void password()//����ȷ��
{
	int password = 02;//����
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
			break;//���е��������������ȷ
		}
		error();
	}

}

int mainmenu()//���˵�����
{
	printmenu(1);
	printbox(2, 3, 10, 6);
	SetPos(1, 17);
	int code = 1, ch, check = 0;//codeָ���ܴ���
	while (check == 0)//�÷����ѡ����
	{
		ch = getch();
		switch (code)//Ĩ�����
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
		case 49://���ּ�
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
		case 97://���ּ������������ּ�
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

		switch (code)//��ӡ���
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

void search()
{
	system("cls");
	printmenu(3);
	printbox(2, 3, 10, 6);
	SetPos(1, 17);
	int code = 1, ch, check = 0;//codeָ���ܴ��� 1���� 2���� 3�˳�
	while (check == 0)//�÷����ѡ����
	{
		ch = getch();
		switch (code)//Ĩ�����
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
		default:
			break;
		}
		SetPos(1, 17);
		switch (ch)
		{
		case 75://left
			if (code == 1)
				code += 3;
			code -= 1;
			break;
		case 77://right
			if (code == 3)
				code -= 3;
			code += 1;
			break;
		case 49://���ּ�
			code = 1;
			break;
		case 50:
			code = 2;
			break;
		case 51:
			code = 3;
			break;
		case 97://���ּ������������ּ�
			code = 1;
			break;
		case 98:
			code = 2;
			break;
		case 99:
			code = 3;
			break;
		case 13:
			check = 1;
			break;
		default:
			break;
		}

		switch (code)//��ӡ���
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

void LuRu()
{
	system("cls");
	printmenu(4);
	printbox(9, 3, 20, 3);
	SetPos(1, 17);
	int code = 1, ch, check = 0;//codeָ���ܴ��� 
	while (check == 0)//�÷����ѡ����
	{
		ch = getch();
		switch (code)//Ĩ�����
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
			printspace(9, 7, 10, 3);
			break;
		case 7:
			printspace(9, 7, 20, 3);
			break;
		default:
			break;
		}
		SetPos(1, 17);
		switch (ch)
		{
		case 75://left
			if (code == 6)
				code = 7;
			if (code == 7)
				code = 6;
			break;
		case 77://right
			if (code == 6)
				code = 7;
			if (code == 7)
				code = 6;
			break;
		case 72://up
			if (code == 1)
				code = 6;
			else
				code -= 1;
			break;
		case 80://down
			if (code >= 7)
				code == 8;
			else
				code += 1;
			break;
		default:
			break;
		}

		switch (code)//��ӡ���
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
			printbox(9, 13, 10, 3);
			break;
		case 7:
			printbox(16, 13, 10, 3);
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
	system("title ѧ���ɼ�����ϵͳ");//���ϸı䴰����ɫ ��С ����
	printmenu(5);
	getch();
	password();
	

	int code = 1;
	struct Score//һ���ṹ��
	{
		char num[12];  	//ѧ�� 
		char name[10];  //���� 
		int cpp;		//C�ɼ� 
		int math;		//�����ɼ� 
		int english;		//Ӣ��ɼ� 
		int sum; //���Ƴɼ��ܷ�
	}stu[100];

	

	while (code != 8)
	{
     
		code = mainmenu();//1��ѯ 2¼�� 3�༭ 4ͳ�� 5��ʾ 6��ȡ 7���� 8�˳�
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