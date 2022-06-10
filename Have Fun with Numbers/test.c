#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void bubble(char dudu[], int n) 
{
	int temp;
	int i, j;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < (n - i); j++) 
		{
			if (dudu[j] > dudu[j + 1])
			{//升序与逆序取决于左方 < 或 >
				temp = dudu[j];
				dudu[j] = dudu[j + 1];
				dudu[j + 1] = temp;
			}
		}
	}
}
int free123(int dudu[], long int n)
{
	int i = 0;
	while (n != 0) 
	{
		dudu[i] = n % 10; i++;
		n /= 10;
	}
	return i;
}
int main() 
{
	char number[30];
	scanf_s("%s", number, 30);
	char doubleNumber[30];

	int bb = 0;
	int jinzhi = 0;//指进位的数字
	int weizhi = strlen(number) - 1;

	//此处模拟乘以2的进位计算
	for (bb = 0; bb < strlen(number); bb++) 
	{
		doubleNumber[bb] = (2 * (number[weizhi] - '0') + jinzhi) % 10 + '0';
		jinzhi = (2 * (number[weizhi] - '0') + jinzhi) / 10;
		weizhi--;
	}//字符 1 的ASCII码数是49，强制转换类型还是49，直接减去48或者'0'

	//此处指最高位是否进位
	if (jinzhi > 0) {
		doubleNumber[bb] = jinzhi + '0';
		doubleNumber[bb + 1] = 0;
	}
	else doubleNumber[bb] = 0;//char类型的 0 指字符'\0'

   /*给number[30]输入一串数字，末尾自动加 '\0'
   但是number[30]给doubleNumber[30]赋值，'\0' 没有赋值过去*/

   //此处将结果记录到另外一个result数组
	char result[30];
	for (bb = 0; bb <= strlen(doubleNumber); bb++) {
		result[bb] = doubleNumber[bb];
	}

	//将number数组与doubleNumber数组冒泡排序，依次对比各元素
	bubble(number, strlen(number));
	bubble(doubleNumber, strlen(doubleNumber));

	//检验两个数组的元素是否相同
	int i = 0;
	for (i = 0; i < strlen(doubleNumber); i++) {
		if (number[i] != doubleNumber[i])
		{ 
			printf("No\n");
			break; 
		}
	}//跳出循环，防止输出很多 No

	//输出环节
	if (i == strlen(result)) {
		printf("Yes\n");
	}

	for (bb = strlen(result) - 1; bb > -1; bb--) 
	{
		printf("%c", result[bb]);
	}
}