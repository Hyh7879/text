#include <stdio.h>

int main() 
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
		int right = sz-1;
		int mid = (left + right / 2);
	
		while (right > left) {
			if (arr[mid] > k)
			{
				right = mid - 1;
			}
			else if (arr[mid] < k)
			{
				left = mid + 1;
			}
			else
			{
				printf("�ҵ��ˣ��±���: % d", mid);
				break;
			}
		}
	return 0;
}