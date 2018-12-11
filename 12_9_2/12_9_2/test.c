#include"contact.h"

void meun()
{
	printf("**********************************************\n");
	printf("******   1.add   ******     2.gai       ******\n");
	printf("**********************************************\n");
	printf("******   3.cha   ******     4.dayin     ******\n");
	printf("**********************************************\n");
	printf("******   5.shan  ******     6.paixu     ******\n");
	printf("**********************************************\n");
	printf("****************  0.ext  *********************\n");
	printf("**********************************************\n");
}

void test()
{
	int input = 0;
	con cn;
	//开辟空间
	cn.com = (pp*)calloc(max_count, sizeof(pp));
	cn.count = 0;//
	cn.capacity = max_count;
	do
	{
		meun();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case ext:
			free(cn.com);
			cn.com == NULL;
			printf("退出！\n");
			break;
		case add:
			printf("增加联系人！\n");
			//增加联系人
			Add(&cn);
			break;
		case gai:
			//修改联系人信息
			Gai(&cn);
			break;
		case cha:
			//查找联系人信息
			Cha(&cn);
			break;
		case dayin:
			//打印通讯录
			Dayin(&cn);
			break;
		case shan:
			//删除联系人
			Shan(&cn);
			break;
		case paixu:
			//进行排序并打印
			Paixu(&cn);
			break;
		default:
			printf("无此选项！\n");
		}
	} while (input);
}

int main()
{
	//动态
	test();
	system("pause");
	return 0;
}
