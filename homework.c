#include <stdio.h>

void task_1() {
    int weight;

    scanf(&weight);

    if(weight <= 60 && weight >= 90) {
        printf("Ok");
    } else {
        printf("Not ok, you are fat hahahah");
    }
}

int main() {
    task_1();
}