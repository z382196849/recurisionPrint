#include<stdio.h>
#include<windows.h>

int Print(int num)
{
    if(num > 0)
    {
	Print(num / 10);
	printf("%d\n", num % 10);
    }
}

int main()
{
    int i = 0;
    printf("请输入:i = ");
    scanf("%d", &i);
    Print(i);
    printf("\n");
    system("pause");
    return;
}
