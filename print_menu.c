#include"header.c"
void print_menu()
{
	char c;
	printf("\t\t************************\n\
		***STUDENT RECORD MENU***\n\
		*************************\n\
		a/A :add new record\n\
		d/D :delete a record\n\
		s/S :show the list\n\
		m/M :modify the record\n\
		v/V :save\n\
		e/E :exit\n\
		t/T :sort the list\n\
		l/L :delete the records\n\
		r/R :reverse the list\n\
		Enter your choice:\n\
		************************\n");
	scanf(" %c",&c);
}
