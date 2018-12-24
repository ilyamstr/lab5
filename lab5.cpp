﻿#include "pch.h"
#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "Russian");

	int menu;
	int size;
	int* arr = NULL;
	printf("Hello!\n");
	do
	{
		printf("\n--------Меню--------\n");
		printf("1) Ввод массива.\n");
		printf("2) Найти сумму всех модулей элементов массива.\n");
		printf("3) Выход.\n");

		printf("\nВаша команда - ");
		char c;
		while ((scanf_s("%d%c", &menu, &c, 1) != 2) || c != '\n')
		{
			printf("\nВведена неверная команда. Повторите ввод: ");
			while (getchar() != '\n');
		}


		switch (menu)
		{
		case 1:
			if (arr != NULL)
			{
				delete[] arr;
			}
			printf("\nВведите количество элементов: ");
			scanf_s("%d", &size);
			arr = new int[size];
			for (int i = 0; i < size; i++)
			{
				printf("\narr[%d] = ", i);
				scanf_s("%d", &arr[i]);
			}
			break;
		case 2:
			int summa = 0;
			for (int i = 0; i < size; i++)
			{
				summa = summa + fabs(arr[i]);
			}
			printf("Сумма модулей элементов равна  %d", summa);
			break;
		case 3:
			break;
		default:
			printf("\nПрограмма не всемогущая.Выберете существующую команду.\n");

			break;
		}
	} while (menu != 3);
	delete[] arr;
	return 0;
}
