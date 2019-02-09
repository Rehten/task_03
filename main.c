#include <stdio.h>

int main() {
    int u_count = 0;
    float u_input[10];
    float acc = 0;
    printf("Введите 10 чисел, чтобы получить их среднее арифметическое:\n");

    while (u_count != 10) {
        scanf("%f", &u_input[u_count]);
        acc += u_input[u_count];
        printf("Ваше %d число: %7.2f\n", u_count + 1, u_input[u_count]);
        u_count++;
    }

    printf("Среднее арифметическое вашего ввода(до второго знака после запятой): %22.2f", acc/u_count);

    return 0;
}