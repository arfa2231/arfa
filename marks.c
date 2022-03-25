#include<stdio.h>
int main()
{
	int n,i,avg;
	struct student
	{
		int rollno,english,maths,science,socialscience,lang1,lang2;
		char name[20];
		float avg;
	};
	struct student s[20];
	printf("enter the number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter student %d details:",i++);
		printf("enter roll number:");
		scanf("%d",&s[i].rollno);
		printf("enter student name:");
		scanf("%s",s[i].name);
		printf("enter english marks:");
		scanf("%d",&s[i].english);
		printf("enter maths marks:");
		scanf("%d",&s[i].maths);
		printf("enter science marks:");
		scanf("%d",&s[i].science);
		printf("enter socialscience marks:");
		scanf("%d",&s[i].socialscience );
		printf("enter language1 marks:");
		scanf("%d",&s[i].lang1);
		printf("enter language2 marks:");
		scanf("%d",&s[i].lang2);
	}
	 for(i=0;i<n;i++)
	 {
	 	s[i].avg=(s[i].english+s[i].maths+s[i].science+s[i].socialscience+s[i].lang1+s[i].lang2)/6;
	 }
	 printf("enter the average marks:\n");
	 scanf("%d",&avg);
	 for(i=0;i<n;i++);
	 {
	 	if(s[i].avg>avg)
	 	{
	 		printf("students scored above average");
	 	}
	 	 else
	 	 {
	 	 	printf("students scored below average");
	 	 }
	 }
	 return 0;
}	 	 			
		 	
