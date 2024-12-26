#include"header.c"
#include<string.h>
void stud_modify(ST**ptr)
{
	char op;
	printf("\t\tEnter which record to search for modification\n\
			R/r:to search a rollno\n\
			N/n:to search a name\n\
			P/p:to search a percentage\n");
	scanf(" %c",&op);
	if((op=='R')||(op=='r'))
	{
		int n;
		printf("Enter the new rollno\n");
		scanf("%d",&n);
		stud_modify_roll(ptr,n);
	}

	if((op=='N')||(op=='n'))
	{
		char name[100];
		printf("Enter the name to modify\n");
		scanf("%s",name);
		stud_modify_name(ptr,name);
	}
	if((op=='P')||(op=='p'))
	{
		float per;
		printf("Enter the percentage to modify\n");
		scanf("%f",&per);
		stud_modify_per(ptr,per);
	}
}
void stud_modify_roll(ST**ptr,int n)
{
	ST*temp=*ptr;
	int modify_roll;
	printf("Enter the roll to modify\n");
	scanf("%d",&modify_roll);
	while(temp!=NULL)
	{
		if(temp->roll==modify_roll)
		{
			temp->roll=n;
			printf("Roll no modified successfully\n");
			return;
		}
		temp=temp->next;
	}
	printf("Roll no not found:\n");
}
void stud_modify_name(ST**ptr,char*s)
{
	ST*temp=*ptr;
	int count=0;
	ST* mul_name[100];
	while(temp!=NULL)
	{
		if(strcmp(temp->name,s)==0)
		{
			mul_name[count]=temp;
			count++;
		}
		temp=temp->next;
	}
	if(count==1)
	{
		temp=mul_name[0];
		printf("Enter the new name");
		scanf("%s",temp->name);
	}
	else if(count>1)
	{
		int i;
		printf("Multiple records found with the same name %s:\n",s);
		for(i=0;i<count;i++)
		{
			printf("%d. rollno:%d Name:%s Marks:%f\n",i+1,mul_name[i]->roll,mul_name[i]->name,mul_name[i]->marks);
		}
		printf("Enter the roll no of the student you want to modify:\n");
		int rolln;
		scanf("%d",&rolln);
		for(i=0;i<count;i++)
		{
			if(mul_name[i]->roll==rolln)
			{
				printf("Enter the new name:");
				scanf("%s",mul_name[i]->name);
				printf("Record modified successfully\n");
				return;
			}
		}
		printf("Roll no not found!\n");
	}
	else
	{
		printf("No students found with the name'%s'!\n",s);
	}
}
void stud_modify_per(ST**ptr,float per)
{
	ST*temp=*ptr;
	int count=0;
	ST *mul_name[100];
	while(temp!=NULL)
	{
		if(temp->marks==per)
		{
			mul_name[count]=temp;
			count++;
		}
		temp=temp->next;
	}
	if(count==1)
	{
		temp=mul_name[0];
		printf("Enter the new percentage\n");
		scanf("%f",&temp->marks);
		printf("Percentage modified successfully\n");
	}
	else if(count>1)
	{
		int i;
		printf("Multiple records found with the same percentage %f:\n",per);
		for(i=0;i<count;i++)
		{
			printf("%d.roll no:%d Name:%s Marks:%f\n",i+1,mul_name[i]->roll,mul_name[i]->name,mul_name[i]->marks);
		}
		printf("Enter the roll no of the student you want to modify:\n");
		int rolln;
		scanf("%d",&rolln);
		for(i=0;i<count;i++)
		{
			if(mul_name[i]->roll==rolln)
			{
				printf("Enter the new percentage:");
				scanf("%f",&mul_name[i]->marks);
				printf("Record modified successfully\n");
				return;
			}
		}
		printf("Roll no not found!\n");
	}
	else
	{
		printf("No students found with percentage %.2f!\n",per);
	}
}


