#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max_name 20
#define max_sex 4
#define max_tln 11
#define max_adds 30
#define max_count 1000

enum P
{
	ext,
	add,
	gai,
	cha,
	dayin,
	shan,
	paixu
};

//������ϵ�˽ṹ��
typedef struct pp
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tln[max_tln];
	char adds[max_adds];
}pp;

//����ͨѶ¼�ṹ��
typedef struct con
{
	pp com[max_count];
	int count;
}con;

void chushihua(con*);
void Add(con*);
void Dayin(con*);
void Cha(con*);
void Gai(con*);
void Shan(con*);
void Paixu(con*);