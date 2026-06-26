// Students Marks management system

#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
    char result;
};
int main()
{
    struct Student s;
    int i;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }
    // Calculate Total
    s.total = 0;
    for(i = 0; i < 5; i++)
    {
        s.total += s.marks[i];
    }
    // Calculate Percentage
    s.percentage = s.total / 5.0;
    // Assign Grade
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';
    // Pass / Fail Criteria
    if(s.percentage >= 60)
        s.result = 'P';   // Pass
    else
        s.result = 'F';   // Fail
    // Display Result
    printf("\n     STUDENT REPORT    \n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("\nMarks Obtained:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d : %d\n", i + 1, s.marks[i]);
    }
    printf("\nTotal Marks : %d/500\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade : %c\n", s.grade);
    if(s.result == 'P')
        printf("Result : PASS\n");
    else
        printf("Result : FAIL\n");
    return 0;
}

/* output 
Enter Roll Number: 31
Enter Student Name: Priyanshi Jain
Enter marks of 5 subjects:
Subject 1: 90
Subject 2: 88
Subject 3: 85
Subject 4: 92
Subject 5: 95

     STUDENT REPORT    
Roll Number : 31
Name        : Priyanshi Jain

Marks Obtained:
Subject 1 : 90
Subject 2 : 88
Subject 3 : 85
Subject 4 : 92
Subject 5 : 95

Total Marks : 450/500
Percentage  : 90.00%
Grade : A
Result : PASS   */