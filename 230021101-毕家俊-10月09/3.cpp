#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	int type;
//输出函数
	printf("请选择数据类型（1-int,2-char,3-float,4-double):");
	//输入函数
 scanf("%d", &type);
//使用 switch 语句根据输入的数字执行不同的代码块
 switch (type) {
// 当输入为 1 时执行的代码
 case 1: {
		int a, b;
		printf("请输入两个整数：");
			scanf("%d %d", &a, &b);
		printf("这两个整数的和是：%d\n", a + b);
		break;// 终止 switch 语句的执行
	}
	   // 当输入为 2 时执行的代码
 case 2: {
		char a, b;
		printf("请输入两个字符：");
			scanf(" %c %c", &a, &b);
		printf("这两个字符的ASCII码的和是：%d\n", (int)a + (int)b);
		break;// 终止 switch 语句的执行
	}
	   // 当输入为 3 时执行的代码
	case 3: {
		float a, b;
		printf("请输入两个浮点数：");
			scanf("%f %f", &a, &b);
		printf("这两个浮点数的和是：%f\n", a + b);
		break;// 终止 switch 语句的执行
	}
		  // 当输入为 4 时执行的代码
	case 4: {
		double a, b;
		printf("请输入两个双精度浮点数：");
			scanf("%lf %lf", &a, &b);
		printf("这两个双精度浮点数的和是：%lf\n", a + b);
		break;// 终止 switch 语句的执行
	}
		  // 当输入不在 1 到 4 范围内时执行的代码
	default:
		printf("输入的类型不正确。\n");
		break;// 终止 switch 语句的执行
	}
	return 0;
}
