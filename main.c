#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

typedef int (*FunPTR)(int a,int b);

int main()
{
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	char* info[4]={"+","-","*","/"};
        FunPTR P[4]={plus,minus,multiply,divided};
        for(int i=0;i<4;i++)
        {
                if(b==*info[i])
                {
                        printf("%d %c %d = %d\n",a,b,c,P[i](a,c));
                }
        }

}
