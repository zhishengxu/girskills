#include <stdio.h>

// 函数声明
int max(int num1, int num2);


// 函数定义
int max(int num1, int num2)
{
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main()
{
    int num1, num2;

    printf("请输入两个数\n");
    scanf("%d %d", &num1, &num2);
    int result = max(num1, num2);
    printf("最大值为：%d\n", result);

    return 0;
}


