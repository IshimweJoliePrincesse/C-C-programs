// C program to store data of
// students and print them
#include <stdio.h>
#include <string.h>
struct students
{
char first_Name[50];
char last_Name[50];
int roll_no;
char branch[50];
float percent;
} st[2];

// Driver code
int main()
{
printf("Enter data of students\n");
for (int i = 0; i < 2; i++)
{
	printf("Enter first name: ");
	scanf("%s", st[i].first_Name);

	printf("Enter last name: ");
	scanf("%s", st[i].last_Name);

	printf("Enter Branch: ");
	scanf("%s", st[i].branch);

	printf("Enter Roll-No.");
	scanf("%d", &st[i].roll_no);

	printf("Enter Percentage: ");
	scanf("%f", &st[i].percent);
}

printf("\n");
printf("Displaying the Information: \n");

for (int i = 0; i < 2; i++)
{
	printf("\nFirst name: ");
	puts(st[i].first_Name);

	printf("Last name: ");
	puts(st[i].last_Name);

	printf("Roll_No: %d",
			st[i].roll_no);

	printf("Branch: ");
	puts(st[i].branch);

	printf("Marks: %.1f",
			st[i].percent);
}
return 0;
}
