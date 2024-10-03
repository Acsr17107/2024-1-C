#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int year, month, last_day;

    printf("��� ���� ������ ���� �Է��ϸ� �� ���� ������ �˷��帳�ϴ�.\n");
    printf("2003 2 : �Է� >> ");
    scanf("%d %d", &year, &month);

    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        last_day = 31;
        break;
    case 4: case 6: case 9: case 11:
        last_day = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            last_day = 29;
        else
            last_day = 28;
        break;

    default:
        printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
        return 0;
    }

    printf("%d�� %d���� ������ %d���Դϴ�.\n", year, month, last_day);

    return 0;
}
