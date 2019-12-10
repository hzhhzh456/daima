#include<stdio.h>
struct data{
	int month;
	int day;
	int year;
}; 
int main(int argc,char const *argv[])
{
	struct data today;
	today=(struct data){07,31,2014};
	struct data day;
	day = today;
	printf("Today's data is %d-%d-%d.\n",today.year,today.month,today.day);
	printf("Day's is %d-%d-%d.\n",day.year,day.month,day.day);
	return 0; 
}
