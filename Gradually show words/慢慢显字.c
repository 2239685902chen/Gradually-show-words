#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char q[] = "***********";
	char w[] = " I love you";
	int e = strlen(q);//�����������±�
	int t = 0;//��������±�
	while (t <= e)
	{
		printf("%s\n", q);
		q[e] = w[e];
		q[t] = w[t];
		e--;
		t++;
		Sleep(1000);//��ͣһ��
		system("cls");//����
	}
	printf("%s\n", q);
	return 0;
}