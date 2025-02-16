#include <stdio.h>
#include <stdbool.h>

// 1. Минимальный вес для полета
void check_weight() {
    int weight;
    printf("Введите ваш вес (кг): ");
    scanf("%d", &weight);
    if (weight >= 60 && weight <= 90) {
        printf("Вы подходите для полета!\n");
    } else {
        printf("Вы не подходите для полета.\n");
    }
}

// 2. Топливо для лунохода
void check_distance() {
    int distance;
    printf("Введите расстояние до станции (км): ");
    scanf("%d", &distance);
    if (distance <= 500) {
        printf("Луноход доберется до станции.\n");
    } else {
        printf("Луноход не сможет доехать.\n");
    }
}

// 3. Кодировка деталей двигателя
void check_symbol() {
    char symbol;
    printf("Введите символ детали (A-Z): ");
    scanf(" %c", &symbol);
    if (symbol >= 'A' && symbol <= 'Z') {
        printf("Символ в допустимом диапазоне.\n");
    } else {
        printf("Недопустимый символ!\n");
    }
}

// 4. Ожидаемый старт миссии
void check_launch_date() {
    int date;
    printf("Введите дату старта (ГГГГММДД): ");
    scanf("%d", &date);
    int current_date = 20250215; // Допустим, текущая дата 15 февраля 2025
    if (date > current_date) {
        printf("Дата старта в будущем.\n");
    } else {
        printf("Дата старта уже прошла или сегодня.\n");
    }
}


// 6. Разделение экипажа
void check_crew_division() {
    int astronauts;
    printf("Введите количество космонавтов: ");
    scanf("%d", &astronauts);

    bool possible = false;
    for (int i = 0; i <= astronauts / 2; i++) {
        for (int j = 0; j <= astronauts / 3; j++) {
            for (int k = 0; k <= astronauts / 4; k++) {
                if (2 * i + 3 * j + 4 * k == astronauts) {
                    printf("Возможно разделение: %d модулей на 2 человека, %d на 3, %d на 4\n", i, j, k);
                    possible = true;
                }
            }
        }
    }
    if (!possible) {
        printf("Невозможно разделить без остатка.\n");
    }
}

// 7. Радиосвязь с Землей
void check_signal_frequency() {
    float frequency;
    printf("Введите частоту сигнала (ГГц): ");
    scanf("%f", &frequency);
    if (frequency >= 2.5 && frequency <= 3.5) {
        printf("Связь стабильна.\n");
    } else {
        printf("Связь нестабильна.\n");
    }
}

// 9. Время до контакта с Землей
void calculate_time_to_contact() {
    double time;
    printf("Введите время передачи (сек): ");
    scanf("%lf", &time);
    printf("Время передачи: %d минут и %.1f секунд\n", (int)(time / 60), fmod(time, 60));
}

// 10. Температура в космосе
void check_temperature() {
    int temperature;
    printf("Введите температуру корпуса (°C): ");
    scanf("%d", &temperature);
    if (temperature >= -150 && temperature <= 120) {
        printf("Температура в допустимом диапазоне.\n");
    } else {
        printf("Температура выходит за пределы нормы!\n");
    }
}

// 11. Уровень кислорода
void check_oxygen_level() {
    float oxygen;
    printf("Введите уровень кислорода (%%): ");
    scanf("%f", &oxygen);
    if (oxygen < 15) {
        printf("Включите аварийную систему!\n");
    } else {
        printf("Уровень кислорода в норме.\n");
    }
}

// 12. Управление гироскопами
void check_gyroscope_angle() {
    int angle;
    printf("Введите угол гироскопа (°): ");
    scanf("%d", &angle);
    if (angle >= -180 && angle <= 180) {
        printf("Угол в допустимых пределах.\n");
    } else {
        printf("Ошибка гироскопа!\n");
    }
}


// 14. Определение веса на Луне
void calculate_moon_weight() {
    int mass;
    printf("Введите массу объекта (кг): ");
    scanf("%d", &mass);
    printf("Вес на Луне: %.2f кг\n", mass / 6.0);
}

// 15. Передача данных между спутниками
void calculate_data_transfer_time() {
    int data_size;
    float speed;
    printf("Введите объем данных (МБ): ");
    scanf("%d", &data_size);
    printf("Введите скорость передачи (Кбит/с): ");
    scanf("%f", &speed);
    float time = (data_size * 8 * 1024) / speed;
    printf("Передача займет %.2f минут\n", time / 60);
}

int main() {
    check_weight();
    check_distance();
    check_symbol();
    check_launch_date();
    check_crew_division();
    check_signal_frequency();
    calculate_time_to_contact();
    check_temperature();
    check_oxygen_level();
    check_gyroscope_angle();
    calculate_moon_weight();
    calculate_data_transfer_time();

    return 0;
}
