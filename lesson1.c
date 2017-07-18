// 예제 1 : 홀수짝수 판단하기
#pragma warning(disable : 4996)
#include<stdio.h>


int main()
{
	int num = 1;

	while (num != 0)
	{
		printf("숫자를 입력하시오 : ");
		scanf("%d", &num);

		if ((num % 2) == 1)
			printf("%d는 홀수입니다.\n", num);
		else
			printf("%d는 짝수입니다.\n", num);
	}
	
	return 0;
}