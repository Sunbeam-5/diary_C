#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int N = 0;
    scanf("%d", &N);
    int i = 0, j = 0;
    int a[10][10] = { 0 };
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                a[i][j] = 1;
            }
            else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    //��ӡ	
    for (i = 0; i < N; i++) {
        for (j = N - 1 - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%4d", a[i][j]);
        }
        //������һ�к����뻻�з���Ȼ����һ��	
        printf("\n");
    }
    return 0;
}
