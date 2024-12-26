#include "header.c"
#include<string.h>
void stud_rev(ST*ptr)
{
	int i,j;
	int c=count(ptr);
	ST**p=(ST**)malloc(c*sizeof(ST*));
	ST temp;
	int size=sizeof(ST)-sizeof(ST*);
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}
	for(i=0,j=c-1;i<j;i++,j--)
	{
		memcpy(&temp,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp,size);
	}
}
int count(ST*ptr)
{
	int c=0;
	while(ptr!=0)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

