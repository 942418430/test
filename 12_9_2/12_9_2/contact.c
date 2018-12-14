#include "contact.h"

//void chushihua(con* p)
//{
//	p->count = 0;
//	memset(p->com, '0', max_count * sizeof(pp));
//}

int zeng(con* p)
{
	pp* a = NULL;
	//如果空间不⾜，调整空间⼤⼩
	if (p->count == p->capacity)
	{
		a = (pp*)realloc(p->com, (p->capacity += 2)*sizeof(pp));
		if (a == NULL)
		{
			printf("%s\n", strerror(errno));
			return 1;
		}
		else
		{
			p->com = a;
			return 0;
		}
	}
}
void Add(con* p)
{
	if (zeng(p))
	{
		printf("请输入姓名：");
		scanf("%s", &(p->com[p->count].name));
		printf("请输入年龄：");
		scanf("%d", &(p->com[p->count].age));
		printf("请输入性别：");
		scanf("%s", &(p->com[p->count].sex));
		printf("请输入电话：");
		scanf("%s", &(p->com[p->count].tln));
		printf("请输入住址：");
		scanf("%s", &(p->com[p->count].adds));

		p->count++;
	}
	

}

void Dayin(con* p)
{
	int i = 0;
	printf("%-11s %-11s %-11s %-11s %-11s\n", "姓名", "年龄", "性别", "电话", "住址");
	for (i = 0; i<p->count; i++)
	{
		printf("%-11s %-11d %-11s %-11s %-11s\n",
			p->com[i].name,
			p->com[i].age,
			p->com[i].sex,
			p->com[i].tln,
			p->com[i].adds);
	}
}

int Chaa(con* p)
{
	char tmp[max_name] = { 0 };
	int i = 0;
	printf("请输入姓名：");
	scanf("%s", tmp);
	for (i = 0; i<p->count; i++)
	{
		if (strcmp(p->com[i].name, tmp) == 0)
			return i;
	}
	return -1;
}

void Cha(con*p)
{
	int n = Chaa(p);
	if (n < 0)
	{
		printf("查⽆此⼈！\n");
	}
	else
	{
		printf("%-11s %-11s %-11s %-11s %-11s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%-11s %-11d %-11s %-11s %-11s\n",
			p->com[n].name,
			p->com[n].age,
			p->com[n].sex,
			p->com[n].tln,
			p->com[n].adds);
	}
}

void Gai(con* p)
{
	int n = Chaa(p);
	if (n < 0)
	{
		printf("要修改的人不存在！\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", &(p->com[n].name));
		printf("请输入年龄：");
		scanf("%d", &(p->com[n].age));
		printf("请输入性别：");
		scanf("%s", &(p->com[n].sex));
		printf("请输入电话：");
		scanf("%s", &(p->com[n].tln));
		printf("请输入住址：");
		scanf("%s", &(p->com[n].adds));
		printf("修改成功\n");
		Dayin(p);
	}
}

void Shan(con* p)
{
	int n = Chaa(p);
	if (n < 0)
	{
		printf("要删除的联系人不存在!\n");
	}
	else
	{
		int i = 0;
		for (i = n; i<p->count - 1; i++)
		{
			p->com[i] = p->com[i + 1];
		}
		p->count--;
		printf("删除成功！\n");
		Dayin(p);
	}
}

void Paixu(con* p)
{
	int i = 0;
	int j = 0;
	int lang = 0;
	pp tep = { 0 };
	for (i = 0; i<p->count - 1; i++)
	{
		for (j = 0; j<p->count - 1 - i; j++)
		{
			if (strcmp(p->com[j].name, p->com[j + 1].name) > 0)
			{
				tep = p->com[j];
				p->com[j] = p->com[j + 1];
				p->com[j + 1] = tep;
				lang = 1;
			}
		}
		if (lang == 0)
			break;
	}
	printf("排序成功！\n");
	Dayin(p);
}

void baocun(con* p)
{
	int i = 0;
	//打开文件
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("open");
		system("pause");
		return;		
	}
	//保存文件
	for (i = 0; i < p->count; i++)
	{
		fwrite(p->com+i, sizeof(pp), 1, pf);
	}
	fclose(pf);
	pf = NULL;
	printf("保存成功\n");
}
void jiazai(con* p)
{
	pp* a = NULL;
	int i = 0;
	pp tmp = { 0 };
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("open");
		system("pause");
		return;
	}
	while (fread(&tmp, sizeof(pp), 1, pf))
	{
		zeng(p);
		p->com[p->count] = tmp;
		(p->count)++;
	}
	fclose(pf);
	pf = NULL;
}