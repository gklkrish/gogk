#include<stdio.h>
void main()
{
int g,k,s;
printf("Enter the values");
scanf("%d %d",&k,&s);
for(g=k;g<s;g++)
{
if(g%2==0)
printf("\n %d",g);
}
}
