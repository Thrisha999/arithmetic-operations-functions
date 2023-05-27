#include<stdio.h>
void main()
{
	int sum(int a,int b),sub(int a,int b),mul(int a,int b),div(int a,int b),mod(int a,int b),a,b;
	printf("enter a and b values:\n");
	scanf("%d %d",&a,&b);
	add(a,b);
	printf("addition =%d\n",add(a,b));
	sub(a,b);
	printf("subtraction=%d\n",sub(a,b));
	mul(a,b);
	printf("multiplication=%d\n",mul(a,b));
	div(a,b);
	printf("division=%d\n",div(a,b));
	mod(a,b);
	printf("modulus=%d\n",mod(a,b));
}
int add(a,b)
{
	int c;
	c=a+b;
	return c;
}
int sub(a,b)
{
	int c;
	c=a-b;
	return c;
}
int mul(a,b)
{
	int c;
	c=a*b;
	return c;
}
int div(a,b)
{
	int c;
	c=a/b;
	return c;
}
int mod(a,b)
{
	int c;
	c=a%b;
	return c;
}

