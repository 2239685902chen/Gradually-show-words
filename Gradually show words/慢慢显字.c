#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char q[] = "***********";
	char w[] = " I love you";
	int e = strlen(q);//计算数组右下标
	int t = 0;//数组的左下标
	while (t <= e)
	{
		printf("%s\n", q);
		q[e] = w[e];
		q[t] = w[t];
		e--;
		t++;
		Sleep(1000);//暂停一秒
		system("cls");//清屏
	}
	printf("%s\n", q);
	return 0;
}