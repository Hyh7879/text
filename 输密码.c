#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[20] = {0};

	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("����������");
		scanf("%s", arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("��½�ɹ�");
			break;}
		if (strcmp(arr,"123456")!=0){
			printf("��¼ʧ��\n");

		}
		if (i == 3)
		{
			printf("�Ѷ�ε�¼ʧ�ܣ����˳�����");
		}

	}
		return 0;
}