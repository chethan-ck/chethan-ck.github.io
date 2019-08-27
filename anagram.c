#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
int main()
{
char a[100],b[100];
int len,len1,len2,i,j,found=0,n=0;
printf("enter the string1");
gets(a);
printf("enter the string2");
gets(b);
len1=strlen(a);
len2=strlen(b);
if(len1==len2)
{
	len=len1;
	for(i=0;i<len;i++)
	{
		found=0;
		for(j=0;j<len;j++)
		{
			if(a[i]==b[j])
			{
				found=1;
				break;
			}
		}
		if(found==0)
		{
			n=1;
			break;
		}
	}if(n==1)
	{
		printf("strings are not  anagram to each other");
	}
	else
	{
	printf("strings are anagram");
	}
	}
	else
	{
	printf("two strings should have same number of character to be anagram");
	}
	getch();
	return 0;
	}
