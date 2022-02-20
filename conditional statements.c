#include<stdio.h>
int main () {
	int marks;
	printf("enter the marks :");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	{
	printf("grade a");
}
else if(marks>=70&& marks<=84)
{
	printf("grade b");
}
else if (marks>=55&&marks<=69)
{
	printf("grade c");
}
else if(marks>=54&&marks<=40)
{
	printf("grade c");
}
else 
{
	printf("grade f");
}
}
