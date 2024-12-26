#include "header.c"
int main()
{
	ST *hptr = 0;
	char op;
	while (1)
	{
		print_menu();
		printf("Enter the choice...\n");
		scanf(" %c", &op);
		switch (op)
		{
		case 'A':
		case 'a':
			stud_add(&hptr);
			break;
		case 'D':
		case 'd':
			stud_del(&hptr);
			break;
		case 'S':
		case 's':
			stud_show(hptr);
			break;
		case 'm':
		case 'M':
			stud_modify(&hptr);
			break;
			/*  case 'v':
					  case 'V':stud_save(hptr);
							   break;
			  case 'e':
					  case 'E':stud_exit(hptr);
							   break;*/
		case 't':
		case 'T':
			stud_sort(hptr);
			break;
		case 'l':
		case 'L':
			stud_deleteall(&hptr);
			break;
		case 'r':
		case 'R':
			stud_rev(hptr);
			break;
		}
	}
}
