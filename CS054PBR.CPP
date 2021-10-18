#include<stdio.h>
#include<conio.h>
struct student
{
int id;
int age;
int marks;
};
void accept(struct student *s1)
{
printf("enter the id->");
scanf("%d",&s1->id);
printf("enter the age->");
scanf("%d",&s1->age);
printf("enter the marks->");
scanf("%d",&s1->marks);
}
void display(struct student *s1)
{
printf("student details are\n");
printf("id is %d\n",s1->id);

printf("age is %d\n",s1->age);
printf("marks is %d\n",s1->marks);
}
int main()
{
struct student s[100];
int no_of_student,i;
clrscr();
printf("please enter the number of students-> ");
scanf("%d", &no_of_student);

for(i=0;i<no_of_student;i++)
accept(&s[i]);

for(i=0;i<no_of_student;i++)
display(&s[i]);
getch();
return 0;
}



