#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    char cha;
    double temperature, celsius, fahrenheit;

    printf("�Է��� �µ��� ��ȯ�մϴ�.\n");
    printf("���ڸ� F�� f�� �Է��ϸ� ������,\n");
    printf("���ڸ� C�� c�� �Է��ϸ� ȭ���� ��ȯ�մϴ�.\n\n");
    printf("���� �Է� >> : ");
    scanf("%c", &cha);
    printf("�µ� �Է� >> ");
    scanf("%lf", &temperature);

    if (cha == 'F' || cha == 'f') {
        celsius = (temperature - 32) * 5.0 / 9.0;
        printf("\nȭ���µ� %.2f�� �����µ��� %.2f�Դϴ�.\n", temperature, celsius);
    }
    else if (cha == 'C' || cha == 'c') {
        fahrenheit = (temperature * 9.0 / 5.0) + 32;
        printf("\n�����µ� %.2f�� ȭ���µ��� %.2f�Դϴ�.\n", temperature, fahrenheit);
    }
    else {
        printf("F, f, C, c �� �ϳ��� �Է��ϼ���.\n");
    }

    return 0;
}
