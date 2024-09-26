#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  // 引用头文件stdio

//mian代表主函数，程序从主函数第一行开始运行--入口，int是返回类型（整数型）大括号里面是函数体



int main()
{
	printf("你好\n不好");// 反斜杠n代笔换行
	return 0;
}
// 执行快捷ctrl+F5
// 一个工程里面可以有多个.c文件，但是多个.c文件只有一个main函数

//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(float)); // sizeof代表返回类型的字节大小
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%zu\n", sizeof(double));// 反斜杠n代笔换行
//	return 0;
//}
// 执行快捷ctrl+F5
// 一个工程里面可以有多个.c文件，但是多个.c文件只有一个main函数
// %d代表整形输出
// 浮点代表的是小数点可以移动
// 全局变量，{}外面，局部{}里面（比如下面age）全局和局部变量能一样但是不建议。print时局部优先。
// 最开始要声明类型


//int age = 100;
//int main()
//{
//	int age = 20;       //向内存申请了一个4个字节空间，然后把20放进去.age是变量
//	float pirce = 66.6;
//	printf("%d", age);       
//	return 0;
//
//}



// 求2个数的和
int main()
{
	int num1 = 0;
	int num2 = 0;//初始化 2个变量
	// scanf是输入函数，这里输入2个整数,输入放入数的时候要取地址&
	scanf("%d %d", &num1, &num2); //scanf在VS里面没有，需要define。在文件里改了之后，每次新建源文件，最开始都有define
	int sum = num1 + num2;
	printf("%d", sum);



	return 0;
}
