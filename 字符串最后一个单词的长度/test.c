#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n = 0;
//	char str[5001] = { 0 };
//	scanf("%s", str);
//	const char s[2] = " ";
//	char* token = 1;
//    /* ��ȡ��һ�����ַ��� */
//    token = strtok(str, s);
//
//    /* ������ȡ���������ַ��� */
//    while (token != NULL)
//    {
//        printf("%s\n", token);
//
//        token = strtok(NULL, s);
//    }
//    printf("\n");
//    for (int i = 0; i < 34; i++)
//        printf("%c", str[i]);
//
//    return (0);
//}
#include <stdio.h> //printf, fgets, stdin
#include <string.h> //strrchr, strchr, strlen

int main(void)
{
    char str[5000] = { 0 };
    int length = 0;
    char* p = NULL;

    /* ʹ��fgets�ӱ�׼����(stdin)��ȡһ�� */
    fgets(str, sizeof(str), stdin);

    /* ʹ��strrchr�ҵ����ұߵĵ�һ���ո� */
    p = strrchr(str, ' ');
    if (p)
        p = p + 1; //ָ������ĸ
    else
        p = str; //ֻ��һ������

    /* ʹ��strchr�����Ƿ���ڻ��з� */
    if (strchr(p, '\n'))
        length = strlen(p) - 1;
    else
        length = strlen(p);

    printf("%d\n", length);
    return 0;
}
