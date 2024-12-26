#include"header.c"
void stud_deleteall(ST**ptr)
{
	ST*temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
}
