#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,flag=1;
	char s[10];
	printf("enter the string");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!='0' && s[i]!='1')
		{
			flag=0;
		}
	}
	if(flag!=1)
	printf("invalid string");
	if(flag==1)
	{
		if(s[0]=='0' && s[l-1]=='1')
		{
			printf("string is accepted");
		}
		else
		{
			printf("string is not accepted");
		}
	}
}
