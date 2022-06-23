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
	i = 1;  //小白觉得把那啥这个人的编号从1开始比较好算、好理解
	int t = 0, m = 0; //这个t是判断的人数变量，m是记录人离开的数量
	while (m != n - 1)//括号里的是判断条件，因为最后只剩一个人
	{
		t++;
		if (t != 3)
		{
			a[i + n - m] = a[i];//这一步很关键，i+n-m=i是数组后面按顺序将判断时没淘汰的人排在了后面
			printf("%d-%d-%d\n",a[i],a[i+n-m],i+n-m);
//这是检验每一步的数组元素是否为在草稿上演算的一样
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
