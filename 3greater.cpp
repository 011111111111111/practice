#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter your first number: ");
	scanf("%d",&a);
	printf("Enter your second number: ");
	scanf("%d",&b);
	printf("Enter your third number: ");
	scanf("%d",&c);
//if (a>b>c || a>c>b)
//{
//
//	printf("The greatest number among a, b and c is %d",a);
//	
//}
//else if(b>a>c || b>c>a)
//{
//	printf("The greatest number among a, b and c is %d",b);
//}
//else 
//{
//	printf("The greatest number among a, b and c is %d",c);
//}
//}
if (a==b || b==c || c==a)
{

}
else if(a>b && a>c)
{
	printf("The greatest number is %d",a);
}
else if(b>c)
{
	printf("The greatest number is %d",b);
}
else
{
	printf("The greatest number is %d",c);
}
}
