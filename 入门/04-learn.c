#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char word;
    int i;
    int j;
    int k;
    int l;

    printf("请输入一个大写字母:\n");
    scanf("%c",&word);
    while(getchar() != '\n');

    if((word < 'A') || (word > 'Z'))
    {
        printf("请输入大写字母!\n");
        exit(0);
    }

    for(i=0; i <= (word-'A');i++)
    {
        // 输出前置空格
        for(j=0; j < (word-'A')-i; j++)
            printf(" ");
        // 输出升序字母
        for(k=0; k<= i; k++)
        {
            printf("%c",'A'+k);
        }
        // 输出降序字母
        for(l=1; l<= i; l++)
        {
            printf("%c",'A' + (k-1) - l);
        }
        // 换行
        printf("\n");
    }

    return 0;
}