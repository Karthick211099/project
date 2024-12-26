#include"header.c"
#include<string.h>
void stud_sort(ST*ptr)
{
	char op;
	printf("Enter\n\
		N/n:sort with name\n\
		P/p:sort with percentage\n");
	scanf(" %c",&op);
	if((op=='N')||(op=='n'))
	{
		sort_name(ptr);
	}
	else if((op=='P')||(op=='p'))
	{
		sort_per(ptr);
	}
	else
		printf("Invalid option\n");
}
void sort_name(ST*ptr)
{
	ST*i,*j;
	char temp_name[50];
	float temp_marks;
	int temp_rollno;
	for(i=ptr;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(strcmp(i->name,j->name)>0)
			{
				strcpy(temp_name,i->name);
				strcpy(i->name,j->name);
				strcpy(j->name,temp_name);

				temp_marks=i->marks;
				i->marks=j->marks;
				j->marks=temp_marks;

				temp_rollno=i->roll;
				i->roll=j->roll;
				j->roll=temp_rollno;
			}
		}
	}
}
void sort_per(ST*ptr)
{
	ST*i,*j;
	float temp_marks;
	char temp_name[50];
	int temp_rollno;
	for(i=ptr;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->marks < j->marks)
			{
				temp_marks=i->marks;
                                i->marks=j->marks;
                                j->marks=temp_marks;

				strcpy(temp_name,i->name);
                                strcpy(i->name,j->name);
                                strcpy(j->name,temp_name);

				temp_rollno=i->roll;
				i->roll=j->roll;
				j->roll=temp_rollno;
			}
		}
	}
}
