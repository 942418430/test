#ifndef _GAME_H_
#define _GAME_H_

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

#define row 3
#define col 3
#define m 3

void dayin(char arr[row][col], int ROW, int COL);
void renzou(char arr[row][col], int ROW, int COL);
void dianzou(char arr[row][col], int ROW, int COL);
char panduan(char arr[row][col], int ROW, int COL);
int is_full(char arr  [row][col], int ROW, int COL);

#endif


#include"game.h"

void dayin(char arr[row][col], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			
			printf("%c",arr[i][j]);
			if(j<(COL-1))
				printf("|");
		}
		

		printf("\n");
		for(j=0; j<(COL)*2; j++)
		{
			if(i<(ROW-1))
			printf("-");
		}
		printf("\n");
	
	}
}


void renzou(char arr[row][col], int ROW, int COL)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("输入坐标->\n");//人走
	
		scanf("%d%d",&x,&y);
		if(x>0 && x<=ROW && y>0 && y<=COL && arr[x-1][y-1]==' ')
		{
			arr[x-1][y-1]='*';
		
			break;
		}
		else
			printf("请输入合法坐标！\n");
	}
	
}

void dianzou(char arr[row][col], int ROW, int COL)
{
	int i, j;
	while(1)
	{
	 i = rand()%row;
	 j = rand()%col;
	 if(arr[i][j]==' ')
	 {
		 arr[i][j]='0';
		 break;
	 }
	}		
}

char panduan(char arr[row][col], int ROW, int COL)
{int i = 0;
 //判断行是否相等，如果相等返回此行第一个字符
  for (i = 0; i < ROW; i++)
  {
   int j = 0;
   int count = 0;
   char  ret = arr  [i][0];
   for (j = 1; j < COL; j++)
   {
    if (ret== arr  [i][j])
    {
     count++;
    }
   }if (count == m-1)
   {
    return arr  [i][0];
   }
  }
  //判断列是否相等，如果相等返回此列第一个字符
  for (i = 0; i < ROW; i++)
  {
   int j = 0, count = 0;
   char  ret = arr  [0][i];
   for (j = 1; j < COL; j++)
   {
    if (ret== arr  [j][i])
    {
     count++;
    }
   }
   if (count == m-1)
   {
    return arr  [0][i];
   }
  }
  //判断主对角线是否相等，如果相等返回此对角线第一个字符
    for (i = 0; i < ROW; i++)
  {
   int j = 0, count = 0;
   char ret = arr  [0][0];
   for (j = i; j <= i; j++)
   {
    if (ret== arr  [i][j])
    {

		count++;
    }
   }
   if (count == m-1)
   {
    return arr  [0][0];
   }
  }

   //判断平局
   if (1 == is_full(arr  , ROW, COL))///调用is_full函数
  {
   return 'Q';
  }
}
//判断棋盘是否已满
int is_full(char arr  [row][col], int ROW, int COL)
{
 int i = 0;
 int j = 0;
  
 for (i=0; i<ROW; i++)
   {
	   for(j=0; j<COL; j++)
	   {
		   if(arr[i][j]==' ')
			   return 0;
	   }
 }
  return 1;
}



#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("*******   1. play  *******\n");
	printf("*******   0. exit  *******\n");
	printf("**************************\n");
}
void game()
{   
	char ch = { 0 };
	char arr[row][col]={ 0 };//定义一个二维数组
	memset(arr, ' ', row*col);//初始化数组
	dayin(arr,row,col);//打印棋盘
	while(1)
	{
	renzou(arr,row,col);//人走
	ch=panduan(arr,row,col);
	if ('*' == ch)
  {
   printf("玩家赢\n");
   break;
  }
  else if ('0' == ch)
  {
   printf("电脑赢\n");
   break;

  }
	  else if ('Q' == ch)
  {
   printf("平局\n");
   break;
  }
 

	dianzou(arr,row,col);//电脑走

	ch=panduan(arr,row,col);
	
	if ('*' == ch)
  {
   printf("玩家赢\n");
   break;
  }
  else if ('0' == ch)
  {
   printf("电脑赢\n");
   break;
  }
  else if ('Q' == ch)
  {
   printf("平局\n");
   break;
  }

  dayin(arr,row,col);
	}
	dayin(arr,row,col);
}
void test()
{
	int n =0;
	do
	{
	
	menu();//打印菜单
	printf("请选择->\n");
	scanf("%d",&n);

		switch(n)
		{
		case 1 :
			printf("进入游戏:\n");
		    game();//玩游戏
			break;
		case 0 :
			printf("退出游戏:\n");
			break;
		default :
			printf("选择不合法！\n");
			break;
		}
	}

		while(n);

		
	
}



int main ()
{
	

	test();//判断继续游戏或退出游戏

	system("pause");

	return 0;
}
