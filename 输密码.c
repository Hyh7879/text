#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[20] = {0};

	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë");
		scanf("%s", arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("µÇÂ½³É¹¦");
			break;}
		if (strcmp(arr,"123456")!=0){
			printf("µÇÂ¼Ê§°Ü\n");

		}
		if (i == 3)
		{
			printf("ÒÑ¶à´ÎµÇÂ¼Ê§°Ü£¬ÇëÍË³ö³ÌÐò");
		}

	}
		return 0;
}