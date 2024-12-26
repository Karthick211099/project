#include"header.c"
#include<string.h>
void stud_del(ST **ptr)
{
	int n;
	char op;
	printf("\t\tr/R:Enter rollno to delete\n\
		    N/n:Enter name to delete\n");
        scanf(" %c",&op);
        if((op=='R')||(op=='r'))
	{
	printf("Enter the rollno to delete\n");
        scanf("%d",&n);
        stud_del_roll(ptr,n);
//	stud_show(*ptr);
	}
	if((op=='N')||(op=='n'))
	{
		char s[20];
		printf("Enter the name to delete\n");
		scanf("%s",s);
		stud_del_name(ptr,s);
//		stud_show(*ptr);
	}
}

void stud_del_roll(ST**ptr,int n)
{
	ST*temp=*ptr,*prv;
	while(temp!=0)
	{
		if(temp->roll==n)
		{
			if(temp==*ptr)
				*ptr=temp->next;
			else
				prv->next=temp->next;
			free(temp);
			temp=NULL;
			return;
		}
		else
		{
			prv=temp;
			temp=temp->next;
		}
	}
	printf("The data doesn't exist to delete\n");
}

void stud_del_name(ST**ptr,char*name)
{
	ST*temp=*ptr;
	int cnt=0;
	ST*stud_name[100];
	while(temp!=0)
	{
		if(strcmp(temp->name,name)==0)
		{
			stud_name[cnt]=temp;
			cnt++;
		}
		temp=temp->next;
	}
	if(cnt==1)
	{
		temp=*ptr;
		ST*prv=NULL;
		while(temp!=0)
		{
			if(strcmp(temp->name,name)==0)
			{
				if(temp==*ptr)
					*ptr=temp->next;
				else
					prv->next=temp->next;
				free(temp);
				temp=NULL;
				printf("Record deleted successfully\n");
				return;
			}
			else
			{
				prv=temp;
				temp=temp->next;
			}
		}
	}
		else if(cnt>1)
		{
			int i;
			printf("Multiple students found with the same name %s:\n",name);
			for(i=0;i<cnt;i++)
			{
				int no;
				printf("%d.Roll no:%d ,Name:%s\n",i+1,stud_name[i]->roll,stud_name[i]->name);
				printf("Enter the rollno to delete\n");
			        scanf("%d",&no);
				stud_del_roll(ptr,no);
				
			}
		}
		else
		{
			printf("The name doesn't exist to delete\n");
		}
	}

