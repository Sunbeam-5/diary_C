#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main()
{
	int n;
	scanf("%d", &n);
	int flag = 0;
	for (int y = 0; y < 50; y++)//yԪ�Ŀ�������
	{
		for (int f = 0; f < 100; f++)//f�ֵĿ�������
		{
			if (98 * f - 199 * y == n)
			{
				printf("%d.%d",y,f);
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)//�ж�ѭ������ʱ�Ƿ��ҵ���Ӧ��y��fֵ
	{
		printf("No Solution");
	}
	return 0;
}