//������� 16
#include <stdio.h>
#include <locale.h>
#define D 365
#define M 12

int svet(int years)
{
	int day = years * D;
	return day;
}
int svet1(int years)
{
	int month = years * M;
	return month;
}
int main() {
	setlocale(LC_ALL, "RUS");
	int years;
	puts("������� ���������� �����");
	scanf_s("%d", &years);
	printf("%d ��� - ��� %d ���� � %d �������\n", years, svet(years), svet1(years));

}