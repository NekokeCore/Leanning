//比较两个两个整数中的最大值
#include <stdio.h>
int main() //主函数
{
	int max(int x, int y); //对被调用的max函数进行声明
	int a, b, c;  //定义整型变量a、b、c
	//scanf("% d, % d", &a, &b);  //从键盘输入获得输入的变量值，并且把变量赋给a，b, 注意这个方法不安全
	scanf_s("%d,%d",&a,&b,1); //scanf的替代方法\
	//scanf函数在读取时不检查边界，所以可能会造成内存访问越界。scanf＿s函数带“＿s”后缀是为了让原版函数更安全，传入一个和参数有关的大小值，避免引用到不存在的元素。
	c = max(a, b);  //调用max函数，并且把函数返回的值赋给c
	printf("max= % d\n", c);  //输出c的值
	return 0;  //主函数返回值
	
}

int max(int x, int y)  //定义max函数，函数值为整型，形式参数x，y为整型
{
	int z;  //max函数中的函数声明部分，定义z在max函数中为整型
	if (x > y)  //if条件判断，如果x>y，则将x的值赋给变量z
		z = x;
	else  //否则，将y的值赋给z
		z = y;
	return (z);  //max的函数返回值
}