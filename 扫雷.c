#ifndef _GAME_H_
#define _GAME_H_

#define row 9
#define col 9

#define rows row+2
#define cols col+2

#define n 10

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void chushihua(char arr[rows][cols], int ROWS, int COLS, char a);
void dayin(char arr[rows][cols], int a, int b);
void bulei(char arr[rows][cols], int a, int b);
int panduan(char arr[rows][cols], char arr2[rows][cols], int a, int b);

#endif


#define _CRT_SEWRE_NO_WARNINGS 1
#include"game.h"

void chushihua(char arr[rows][cols], int ROWS, int COLS, char a)
{
	memset(arr, a, ROWS*COLS*sizeof(arr[0][0]));
	//int i = 0;
	//int j = 0;
	//for(i=0; i<ROWS; i++)
	//	for(j=0; j<COLS; j++)
	//		arr[i][j]=a;
}

void dayin(char arr[rows][cols], int a, int b)
{
	int i = 0;
	int j = 0;
	for(i=1; i<=a; i++)
	{
		for(j=1; j<=b; j++)
		{
			printf("%c ",arr[i][j]);

		}
		printf("\n");
	}
}

void bulei(char arr[rows][cols], int a, int b)
{
	
	int m = n;
	while(m)
	{
		
		int x =rand()%a+1;
		int y =rand()%b+1;
		if(arr[x][y]=='0')
		{
			arr[x][y]='1';
			m--;
		}
	}
}

int panduan(char arr[rows][cols], char arr2[rows][cols], int a, int b)
{
	int m = row*col-n;
	if(a>=1 && a<=row && b>=1 && b<=col)
	{
			if(arr[a][b]=='1')
			{
					printf("游戏结束，你踩到雷了！\n");
					arr2[a][b]='@';

					return 0;
			}
			else if(arr[a][b]=='0')
			{
				arr2[a][b]=
					arr[a-1][b]+
					arr[a-1][b-1]+
					arr[a][b-1]+
					arr[a+1][b-1]+
					arr[a+1][b]+
					arr[a+1][b+1]+
					arr[a][b+1]+
					arr[a-1][b+1]-8*'0'+'0';
				m--;
				if(m==0)
				{
					printf("恭喜您获胜！");
					return 0;
				}
				
			}
	}
	else
		printf("输入有误，请重新输入!\n");
	return 1;
}

#define _CRT_SEWRE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***************************************\n");
	printf("****   1.play       0.exit         ****\n");
	printf("***************************************\n");
}
void game()
{
	int x = 0;
	int y = 0;
	int a = 0;
	char arr1[rows][cols] = { 0 };//存放布置好雷的信息；
	char arr2[rows][cols] = { 0 };//存放排查出来雷的信息

	chushihua(arr1, rows, cols, '0');
	chushihua(arr2, rows, cols, '*');

	//dayin(arr1,row,col);
	dayin(arr2,row,col);

	bulei(arr1,row,col);
	dayin(arr1,row,col);

	do
	{
	printf("请输入坐标：\n");
	
	scanf("%d%d",&x,&y);

	a = panduan(arr1, arr2, x, y);
	dayin(arr2,row,col);

	}while(a);
}



int main()
{
	int a = 0;
	srand((unsigned)time(NULL));
	do
	{
	menu();
	printf("请输入-〉");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		{
			printf("进入游戏：\n");
			game();
			break;
		}
	case 0:
		{
			printf("退出游戏：\n");
			break;
		}
	default:
		{
			printf("输入错误！：\n");
			break;
		}
	}
	}
	while(a);
    

	system("pause");
	return 0;
}
