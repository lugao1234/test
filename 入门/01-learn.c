#include <stdio.h>

int main(void)
{
    char temp;
    
    while(1)
    {
        printf("输入字符:\n");
        scanf("%c",&temp);
        getchar(); //读取空格
        printf("%c的ASCII码为:%d\n",temp,temp);
    }
    
    return 0;
}
