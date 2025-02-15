#include <stdio.h>

// Учет студентов
typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

void task_1() {
    int n;
    scanf("%d", &n);
    Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", students[i].name, students[i].age, students[i].gpa);
    }
}

// Инвентаризация товаров
typedef struct {
    char name[50];
    int quantity;
    float price;
} Item;

void task_2() {
    int n;
    scanf("%d", &n);
    Item items[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", items[i].name, &items[i].quantity, &items[i].price);
    }

    for (int i = 0; i < n; i++) {
        printf("Item: %s\nQuantity: %d\nPrice: %.2f\n\n", items[i].name, items[i].quantity, items[i].price);
    }
}

// Календарь событий
typedef struct {
    int day, month, year;
} Date;

typedef struct {
    char name[50];
    Date date;
    char description[100];
} Event;

void task_3() {
    int n;
    scanf("%d", &n);
    Event events[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d %s", events[i].name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].description);
    }

    for (int i = 0; i < n; i++) {
        printf("Event: %s\nDate: %d/%d/%d\nDescription: %s\n\n", events[i].name, events[i].date.day, events[i].date.month, events[i].date.year, events[i].description);
    }
}

// Книга учета сотрудников
typedef struct {
    char name[50];
    char position[50];
    float salary;
} Employee;

void task_4() {
    int n;
    scanf("%d", &n);
    Employee employees[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", employees[i].name, employees[i].position, &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nPosition: %s\nSalary: %.2f\n\n", employees[i].name, employees[i].position, employees[i].salary);
    }
}

// Работа с объединением (Union)
typedef union {
    int i;
    float f;
    char str[20];
} Data;

void task_5() {
    int choice;
    scanf("%d", &choice);
    Data data;

    if (choice == 1) {
        scanf("%d", &data.i);
        printf("Integer: %d\n", data.i);
    } else if (choice == 2) {
        scanf("%f", &data.f);
        printf("Float: %.2f\n", data.f);
    } else if (choice == 3) {
        scanf("%s", data.str);
        printf("String: %s\n", data.str);
    }
}

// Журнал учета транспортных средств
typedef enum { GASOLINE, DIESEL, ELECTRIC } EngineType;

typedef struct {
    char brand[50];
    char model[50];
    int year;
    EngineType engine;
} Vehicle;

void task_6() {
    int n;
    scanf("%d", &n);
    Vehicle vehicles[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d", vehicles[i].brand, vehicles[i].model, &vehicles[i].year, (int*)&vehicles[i].engine);
    }

    for (int i = 0; i < n; i++) {
        printf("Vehicle: %s %s\nYear: %d\nEngine Type: %s\n\n",
               vehicles[i].brand, vehicles[i].model, vehicles[i].year,
               vehicles[i].engine == GASOLINE ? "Gasoline" :
               vehicles[i].engine == DIESEL ? "Diesel" : "Electric");
    }
}

// Работа с указателями на структуры
void task_7() {
    int n;
    scanf("%d", &n);
    Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        Student* s = &students[i];
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", s->name, s->age, s->gpa);
    }
}

// Журнал учета студентов с использованием объединений
typedef union {
    int numeric;
    char letter;
} Grade;

void task_8() {
    int n;
    scanf("%d", &n);
    Grade grades[n];

    for (int i = 0; i < n; i++) {
        int type;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &grades[i].numeric);
            printf("Grade: %d\n", grades[i].numeric);
        } else if (type == 2) {
            scanf(" %c", &grades[i].letter);
            printf("Grade: %c\n", grades[i].letter);
        }
    }
}

// Метеорологическая станция
typedef enum { SUNNY, CLOUDY, RAINY } Condition;

typedef struct {
    float temperature;
    float humidity;
    Condition condition;
} Weather;

void task_9() {
    Weather w;
    scanf("%f %f %d", &w.temperature, &w.humidity, (int*)&w.condition);

    printf("Temperature: %.1f°C\nHumidity: %.1f%%\nCondition: %s\n",
           w.temperature, w.humidity,
           w.condition == SUNNY ? "Sunny" :
           w.condition == CLOUDY ? "Cloudy" : "Rainy");
}

// График учебных дисциплин
typedef struct {
    char name[50];
    int credits;
    char professor[50];
} Course;

void task_10() {
    int n;
    scanf("%d", &n);
    Course courses[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].professor);
    }

    for (int i = 0; i < n; i++) {
        printf("Course: %s\nCredits: %d\nProfessor: %s\n\n", courses[i].name, courses[i].credits, courses[i].professor);
    }
}

int main() {
    task_1();
    task_2();
    task_3();
    task_4();
    task_5();
    task_6();
    task_7();
    task_8();
    task_9();
    task_10();
    return 0;
}
