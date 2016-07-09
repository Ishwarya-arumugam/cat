#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i=0,j=0;
clrscr();
gets(a);
gets(b);
while(a[i]!='\0')
i++;
while(b[j]!='\0')
{
a[i]=b[j];
j++;
i++;
}
a[i]='\0';
printf("%s",a);
getch();
return 0;
}
