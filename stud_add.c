#include"header.c"
void stud_add(ST**ptr)
{
	ST*hptr=0;
	char op;
	do
	{
		add_middle(ptr);
		printf("Do you want add another record(y/n)\n");
		scanf(" %c",&op);
	}while((op=='y')||(op=='Y'));
}
void add_middle(ST**ptr)
{

		ST*temp=(ST*)malloc(sizeof(ST));
		temp->roll=next_rollno(*ptr);
		printf("Enter the name&marks\n");
		scanf("%s%f",temp->name,&temp->marks);

		if((*ptr==0)||(temp->roll<(*ptr)->roll))
		{
			temp->next=*ptr;
			*ptr=temp;
		}
		else
		{
			ST*last=*ptr;
			while((last->next!=0)&&(temp->roll>last->next->roll))
				last=last->next;
			temp->next=last->next;
			last->next=temp;
		}
}
int next_rollno(ST*ptr)
{
	int rollno=1;
	while(ptr)
	{
		if(ptr->roll==rollno)
		{
			rollno++;
			ptr=ptr->next;
		}
		else
		{
			return rollno;
		}
	}
	return rollno;
}

