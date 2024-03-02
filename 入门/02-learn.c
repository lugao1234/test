#include <stdio.h>

//用异或实现a与b交换，不使用第三个数据
int main(void)
{
   int a,b;

    printf("输入a:\n");
    scanf("%d",&a);
    while(getchar() != '\n');

    printf("输入b:\n");
    scanf("%d",&b);
    while(getchar() != '\n');

    printf("a=%d,b==%d\n",a,b);


    printf("end: a=%d,b=%d\n",a^b^a, a^b^b);
    return 0;
}
