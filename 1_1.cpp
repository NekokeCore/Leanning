//简单的第一个C语言程序


#include <stdio.h>
int main()
{
	printf("This is a C program. \n");
	return 0;
}

//总结
//mian()的main是C语言程序主函数的名字
//int是函数类型，为整数，整形integer，执行此函数后会返回一个整数的函数值
//{}括起来的是函数体
//函数体内只有一个执行语句，return是函数的返回值，返回的是0，\n是换行符

//所有函数体内的语句都要有一个分号;

//stdio.h是基本函数输入输出，只要在程序中使用基本函数输入输出的语法时都需要写这个头文件，他是解释这些函数的声明