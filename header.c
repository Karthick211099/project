#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *next;
}ST;
void print_menu();
void stud_add(ST**);
void stud_show(ST*);
void stud_del();
void stud_del_roll(ST**,int);
void stud_del_name(ST**,char*);
void stud_deleteall(ST**);
void stud_sort(ST*);
void sort_name(ST*);
void sort_per(ST*);
void stud_rev(ST*);
int count(ST*);
void stud_save(ST*);
void stud_modify(ST**);
void stud_modify_roll(ST**,int);
void stud_modify_name(ST**,char*);
void stud_modify_per(ST**,float);
void stud_exit(ST*);
int next_rollno(ST*);
void stud_add(ST**);
void add_middle(ST**);



