/*1.	Write a program with structure “Students” to contain name, faculty, email,
        and total marks obtained. Develop a program to read data for 5 students 
        and display the overall detail of students rank wise with respect to total
        marks.
*/
#include<stdio.h>
struct students{
        char name[20];
        char fact[10];
        char email[30];
        int marks;
}s[5];
int main()
{
        int i=0;
        printf("Enter the details of the students");
        printf("Enter the email of the students.\n");
        gets("s[i].email");
        printf("%s",s[i].email);
}