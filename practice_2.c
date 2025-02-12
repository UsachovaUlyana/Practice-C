#include <stdlib.h>
#include <stdio.h>

typedef struct {
  char name[50];
  int age;
  float gpa;
} Student;

int main() {
  int n;
  scanf("%d", &n);
  Student *students = (Student*)malloc(n * sizeof(Student));

  for(int i = 0; i < n; i++) {
    scanf( "%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
  }

  for(int i = 0; i < n; i++) {
    printf("name: %s \n", students[i].name);
    printf("age: %d \n", students[i].age);
    printf("gpa: %.2lf", students[i].gpa);
  }
  
  
}
