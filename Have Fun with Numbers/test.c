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
			{//����������ȡ������ < �� >
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
	int jinzhi = 0;//ָ��λ������
	int weizhi = strlen(number) - 1;

	//�˴�ģ�����2�Ľ�λ����
	for (bb = 0; bb < strlen(number); bb++) 
	{
		doubleNumber[bb] = (2 * (number[weizhi] - '0') + jinzhi) % 10 + '0';
		jinzhi = (2 * (number[weizhi] - '0') + jinzhi) / 10;
		weizhi--;
	}//�ַ� 1 ��ASCII������49��ǿ��ת�����ͻ���49��ֱ�Ӽ�ȥ48����'0'

	//�˴�ָ���λ�Ƿ��λ
	if (jinzhi > 0) {
		doubleNumber[bb] = jinzhi + '0';
		doubleNumber[bb + 1] = 0;
	}
	else doubleNumber[bb] = 0;//char���͵� 0 ָ�ַ�'\0'

   /*��number[30]����һ�����֣�ĩβ�Զ��� '\0'
   ����number[30]��doubleNumber[30]��ֵ��'\0' û�и�ֵ��ȥ*/

   //�˴��������¼������һ��result����
	char result[30];
	for (bb = 0; bb <= strlen(doubleNumber); bb++) {
		result[bb] = doubleNumber[bb];
	}

	//��number������doubleNumber����ð���������ζԱȸ�Ԫ��
	bubble(number, strlen(number));
	bubble(doubleNumber, strlen(doubleNumber));

	//�������������Ԫ���Ƿ���ͬ
	int i = 0;
	for (i = 0; i < strlen(doubleNumber); i++) {
		if (number[i] != doubleNumber[i])
		{ 
			printf("No\n");
			break; 
		}
	}//����ѭ������ֹ����ܶ� No

	//�������
	if (i == strlen(result)) {
		printf("Yes\n");
	}

	for (bb = strlen(result) - 1; bb > -1; bb--) 
	{
		printf("%c", result[bb]);
	}
}