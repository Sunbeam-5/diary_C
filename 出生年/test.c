#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int judge(int m, int n)
//{
//	int i = 0, q = m;
//	int arr[10] = { 0 };
//	do
//	{
//		arr[i] = q % 10;
//		i++;
//		q = q / 10;
//	} while (q);
//	if (n == 2)
//	{
//		if (arr[0] != arr[1])
//			return m;
//	}
//	if (n == 3)
//	{
//		if (arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2])
//			return m;
//	}
//	if (n == 4)
//	{
//		if (arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3] && arr[1] != arr[2] && arr[1] != arr[3] && arr[2] != arr[3])
//			return m;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0, n = 0, i = 0, x = 0;
//	scanf("%d%d", &year, &n);
//	for (i = year; ; i++)
//	{
//		x = judge(i, n);
//		if (x != 0)
//			break;
//	}
//	printf("%d %04d", i - year, i);
//	return 0;
//}
#include<stdio.h>
int main(void)
{
	int i, j, birth, num, count = 0;
	int year[4], box[10] = { 0 };
	scanf("%d%d", &birth, &num);
	for (i = birth;/*²»Ğ´ÍêÈ«ok*/; i++) {
		year[0] = i / 1000;
		year[1] = (i / 100) % 10;
		year[2] = (i / 10) % 10;
		year[3] = i % 10;
		for (j = 0; j < 4; j++)box[year[j]] = 1;
		for (j = 0; j < 10; j++)if (box[j] == 1)count++;
		if (count == num)
		{
			printf("%d ", i - birth);
			for (j = 0; j < 4; j++)printf("%d", year[j]);
			return 0;
		}
		for (j = 0; j < 10; j++)box[j] = 0;
		count = 0;
	}
	return 0;
}
