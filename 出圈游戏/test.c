#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1()
{
	int i, a[100], n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a[i] = i;
	}
	i = 1;  //С�׾��ð���ɶ����˵ı�Ŵ�1��ʼ�ȽϺ��㡢�����
	int t = 0, m = 0; //���t���жϵ�����������m�Ǽ�¼���뿪������
	while (m != n - 1)//����������ж���������Ϊ���ֻʣһ����
	{
		t++;
		if (t != 3)
		{
			a[i + n - m] = a[i];//��һ���ܹؼ���i+n-m=i��������水˳���ж�ʱû��̭���������˺���
			printf("%d-%d-%d\n",a[i],a[i+n-m],i+n-m);
//���Ǽ���ÿһ��������Ԫ���Ƿ�Ϊ�ڲݸ��������һ��
		}
		else
		{
			m++;
			t = 0;
		}
		i++;
	}

	printf("%d\n", a[i + n - m - 1]);
	return 0;
}
