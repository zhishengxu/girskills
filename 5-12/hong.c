#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))

int main()

{ 
  int num1, num2;
  printf("请输入两个数：\n");
  scanf("%d %d", &num1, &num2);
  printf("最大的数是：%d\n", MAX(num1,num2));
  return 0;
}
