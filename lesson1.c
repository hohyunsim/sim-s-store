// ���� 1 : Ȧ��¦�� �Ǵ��ϱ�
#pragma warning(disable : 4996)
#include<stdio.h>


int main()
{
	int num = 1;

	while (num != 0)
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &num);

		if ((num % 2) == 1)
			printf("%d�� Ȧ���Դϴ�.\n", num);
		else
			printf("%d�� ¦���Դϴ�.\n", num);
	}
	
	return 0;
}