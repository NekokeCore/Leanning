//求两个整数的和

#include <stdio.h>
int main()
{	int a, b, sum;  //声明变量的类型
	a = 123; b = 456;  //为刚才声明的变量定义数字
	sum = a + b;  //执行加法操作
	printf("sum is %d\n", sum); //输出结果
	return 0;   //主函数返回0
}

//总结
// “//”是注释，可以单独成一行也可以写在右边
// 第5行是对a,b,sum这三个变量的定义，定义为整型
// 第6行是对a，b两个变量的赋值
// 第7行是对sum的赋值
// 第8行是输出，输出