#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
     typedef struct student
     {
        int age;
        char name[20];
        float marks;
     } student;
      student n[4];
    int size =sizeof(n)/sizeof(n[0]);
    n[0].age=21;
    n[0].marks = 9.99;
    strcpy(n[0].name,"subham singh");
// enter the data of 2nd student
n[1].age=22;
n[1].marks=9.5;
strcpy(n[1].name,"sanju singh");
// enter the data of the 3rd student
n[2].age=20;
n[2].marks=9.111;
strcpy(n[2].name,"roy chauhan");
// enter the data of 4th student 
n[3].age=24;
n[3].marks=9.2;
strcpy(n[3].name,"sohan kumar");
for(int i=0;i< size;i++){
    printf("\033[33m the name of the student is\033[0m\t\t :\t\t\033[36m \033[4m%s\n\033[0m ",n[i].name);
    printf("\033[33m the age of this student is\033[0m\t\t:\t\t\t\033[34m\033[4m%d\n\033[0m ",n[i].age);
    printf("\033[33m the marks of this student is\033[0m\t\t:\t\t\t\033[31m\033[4m%f\n \033[0m",n[i].marks);
}
}