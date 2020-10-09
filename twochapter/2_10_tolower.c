#include <stdio.h>

int main(int argc, char *argv[])
{
	char upper;
	//输入提示信息
	printf("输入0，退出程序，输入大写字母，本程序会将其转换为小写\n");
	while(1)
	{
		printf("请输入：");
		scanf("%c", &upper);
		getchar();
		if(upper == '0')
		return 0;
		(upper < 65 || upper > 90) ? printf("输入有误!\n") : (upper += 32);	
		printf("%c\n", upper);
	}
} 
