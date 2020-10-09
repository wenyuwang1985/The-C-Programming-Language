#include <stdio.h>
int main(int argc, char *argv[])
{
	//
	char upper;
	//输出提示信息
	printf("输入0，退出程序，输入大写字母，本程序会将其转换为小写\n");
	//
	while(1)
	{
		//用户输入0，退出，用户输入范围有误，提示并重新输入，输入正确，转换并输出
		scanf("%c", &upper);
		getchar();
		if(upper == '0')
		return 0;
 		else if(upper > 90 || upper < 65)
		{
			printf("输入有误!\n");
			break;
		}
		else
  		{
			upper += 32;
			printf("转换后为：%c\n", upper);
		}	
	}
}
