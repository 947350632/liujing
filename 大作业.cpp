// 大作业.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>;
#include"会员特权管理.h"

;
//全局变量，表示目前的积分
double nowintegral=0.0;

int main()
{
	system("color f0");

	for(;;)
	{
		system("cls");
		int call=-1;
		puts("***欢 迎 进 入 会 员 卡 积 分 管 理 系 统***\n");
		puts("请call\n");
		printf("积分系统 1\t积分折扣 2\t");
		if (level(nowintegral) >= 3)
		{
			printf("积分换购 3\t");
		}
		puts("退出系统 0");
		while (call != 0 && call != 1 && call != 2 && call != 3)
		{
			call = _getch()-'0';
		}
		switch (call)
		{
		case 1:
			integral_system();
			break;
		case 2:
			integral_discount_system();
			break;
		case 3:
			if (level(nowintegral) >= 3)
			{
				integral_shop_system();
			}
			break;
		case 0:
			exit(0);
		}
	}
    return 0;
}

