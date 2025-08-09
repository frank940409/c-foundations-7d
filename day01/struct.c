#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct 
{
    char name[10];
    int age;
    float gpa;
    bool isStudent;
}Student;

void studentinfo(Student student);

int main(){

    Student Student1 = {"Frank Liu", 20, 4.0, true};
    Student Student2 = {0};

    strcpy(Student2.name, "Sara");
    Student2.age = 25;
    Student2.gpa = 3.76;
    Student2.isStudent = true;

    studentinfo(Student1);
    studentinfo(Student2);

    return 0;
}

void studentinfo(Student student){
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isStudent) ? "Yes" : "No");
}