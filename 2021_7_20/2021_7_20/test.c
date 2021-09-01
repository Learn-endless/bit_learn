#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏：
//  1.随机生成一个随机数
//  2.用户反复猜数字
//  3.根据用户所猜数字，给出提示
//  4.最终猜对
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//void menu()
//{
//	printf("************************\n");
//	printf("*******  1.play  *******\n");
//	printf("*******  0.exit  *******\n");
//	printf("*  注意：10次以内猜对  *\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	//设置随机数
//	int ret = rand() % 100 + 1;    //0-99  +1  1-100
//	//猜数字
//	//printf("%d\n", ret);
//	int num = 0;
//	int flag = 0;
//	while (flag < 10)                 //最多只能猜10下
//	{
//		printf("猜数字》");   //提示一下
//		scanf("%d", &num);
//		if (num < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else if (num > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("猜对了！\n");
//			Sleep(2000);
//			break;              //猜对了，退出循环
//		}
//		flag++;
//		if (flag == 10)
//		{
//			printf("10次已到，未猜出，游戏结束！\n");
//			Sleep(2000);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  //设置生成随机数的起点
//	do
//	{
//		menu();      //游戏菜单
//		printf("请选择：");
//		scanf("%d", &input);
//		//输入选项，是否开始游戏
//		switch (input)
//		{
//		case 1:
//			game();    //开始玩游戏
//			system("cls");
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("选择错误，请重新选择》");
//			system("cls");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto语句的使用写法
//#include<stdio.h>
//int main()
//{
//flag:  //标记
//	printf("hello\n");
//	goto flag;
//	return 0;
//}

//关机小程序
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	// 电脑关机
//	system("shutdown -s -t 180");
//agin:
//	// 提示一下
//	printf("请注意，你的电脑将在一分钟后关机，如果想取消，请输入：我是猪\n");
//	scanf("%s", input);
//	//判断是不是：我是猪
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");  //取消关机
//	}
//	else
//	{
//		goto agin;  //重新开始
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	// 电脑关机
	system("shutdown -s -t 180");
	while (1)
	{
		// 提示一下
		printf("请注意，你的电脑将在一分钟后关机，如果想取消，请输入：我是猪\n");
		scanf("%s", input);
		//判断是不是：我是猪
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");  //取消关机
			break;
		}
	}
	return 0;
}