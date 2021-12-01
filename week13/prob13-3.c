#include <stdio.h>
#include<stdlib.h>

#define SIZE 3

typedef struct student {
	int number;
	char name[20];
	double grade;
}STU;

STU list[SIZE];
STU get_max_stu(STU list[]);

int main(void)
{
	STU super_stu;
	int i;
	
	for(i=0; i< SIZE; i++) 
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", &list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}

	super_stu = get_max_stu(list);
	
	printf("평점이 가장 높은 학생은 (이름%s, 학번%d, 평점%f)입니다\n", super_stu.name, super_stu.number, super_stu.grade);
	
}
STU get_max_stu(STU list[])
{
	STU max = list[0];
	int i;

	for(i=1; i< SIZE; i++) 
	{
		if( list[i].grade > max.grade )
		max = list[i];
	}
	return max;
}


