#include <stdio.h>

int main()
{
	//打印标题
	printf("**********华氏温度和摄氏温度对照表***********");
	//当FTemp = 0， 20 ...时，分别打印华氏温度和摄氏温度对照表
	int CTemp, FTemp;
	int lower, upper, step;
	
	lower = 0; //温度表下限
 	upper = 300;//温度表上限
	step = 20;//步长
	
	FTemp = lower;
	while(FTemp <= upper){
		CTemp = 5 * (FTemp-32) / 9;
		printf("%d\t%d\n", FTemp, CTemp);
		FTemp += step;
	}
	return 0;
}
