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
	//���ٿռ�
	cn.com = (pp*)calloc(max_count, sizeof(pp));
	cn.count = 0;//
	jiazai(&cn);
	cn.capacity = max_count;
	do
	{
		meun();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case ext:
			baocun(&cn);
			free(cn.com);
			cn.com = NULL;
			printf("�˳���\n");
			break;
		case add:
			printf("������ϵ�ˣ�\n");
			//������ϵ��
			Add(&cn);
			break;
		case gai:
			//�޸���ϵ����Ϣ
			Gai(&cn);
			break;
		case cha:
			//������ϵ����Ϣ
			Cha(&cn);
			break;
		case dayin:
			//��ӡͨѶ¼
			Dayin(&cn);
			break;
		case shan:
			//ɾ����ϵ��
			Shan(&cn);
			break;
		case paixu:
			//�������򲢴�ӡ
			Paixu(&cn);
			break;
		default:
			printf("�޴�ѡ�\n");
		}
	} while (input);
}

int main()
{
	//��̬
	test();
	system("pause");
	return 0;
}
