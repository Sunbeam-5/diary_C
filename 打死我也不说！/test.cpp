#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char arr[20][20] = { 0 };
//	int a = 0, b = 0, i = 0, j = 0, k = 0, flag1 = 0, flag2 = 0, num1 = 0, num2 = 0, sum = 0;
//	scanf("%d%d", &a, &b);
//	getchar();
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j <= b; j++)
//		{
//			scanf("%c", &arr[i][j]);
//	
//		}
//
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			if (arr[i][j] == 'D')
//			{
//				printf("%d %d\n", i, j);
//				num1 = i + j;
//				flag1 = 1;
//				goto a1;
//			}
//			
//		}
//	}
//	a1:
//	for (i = a - 1; i >= 0; i--)
//	{
//		for (j = b - 1; j >= 0; j--)
//		{
//			if (arr[i][j] == 'S')
//			{
//				printf("%d %d\n", i, j);
//				num2 = i + j;
//				flag2 = 1;
//				goto a2;
//			}
//		}
//	}
//	a2:
//	if (flag1 && flag2)
//		{
//			sum = num1 + num2;
//			printf("%d", sum);
//		}
//		else
//		{
//			printf("DSWYBS");
//		}
//	return 0;
//}
#include<iostream>

using namespace std;

int M, N, dx, dy, sx, sy, sum;
int flag = 0;
char map[15][15];
string ans = "DSWYBS";
int direc[8][2] = { {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1} };

void dfs(int step, int i, int j) {
	if (step == 6) {
		sx = i;
		sy = j;
		flag = 1;
		return;
	}
	for (int k = 0; k < 8; k++) {
		int nxt_i = i + direc[k][0], nxt_j = j + direc[k][1];
		if (nxt_i >= 0 & nxt_i < M && nxt_j >= 0 && nxt_j < N && map[nxt_i][nxt_j] == ans[step]) {
			dfs(step + 1, nxt_i, nxt_j);
		}
	}
}

int main() {
	char ch;
	cin >> M >> N;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> ch;
			map[i][j] = ch;
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'D') dfs(1, i, j);
			if (flag) {
				dx = i;
				dy = j;
				break;
			}
		}
		if (flag) break;
	}
	if (flag) {
		sum = dx + dy + sx + sy;
		cout << dx << ' ' << dy << endl;
		cout << sx << ' ' << sy << endl;
		cout << sum;
	}
	else {
		cout << "DSWYBS";
	}
	return 0;
}