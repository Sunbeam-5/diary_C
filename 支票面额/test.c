#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main()
{
	int n;
	scanf("%d", &n);
	int flag = 0;
	for (int y = 0; y < 50; y++)//y元的控制条件
	{
		for (int f = 0; f < 100; f++)//f分的控制条件
		{
			if (98 * f - 199 * y == n)
			{
				printf("%d.%d",y,f);
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)//判断循环结束时是否找到相应的y和f值
	{
		printf("No Solution");
	}
	return 0;
}