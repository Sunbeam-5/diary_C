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
//    /* 获取第一个子字符串 */
//    token = strtok(str, s);
//
//    /* 继续获取其他的子字符串 */
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

    /* 使用fgets从标准输入(stdin)获取一行 */
    fgets(str, sizeof(str), stdin);

    /* 使用strrchr找到最右边的第一个空格 */
    p = strrchr(str, ' ');
    if (p)
        p = p + 1; //指向首字母
    else
        p = str; //只有一个单词

    /* 使用strchr查找是否存在换行符 */
    if (strchr(p, '\n'))
        length = strlen(p) - 1;
    else
        length = strlen(p);

    printf("%d\n", length);
    return 0;
}
