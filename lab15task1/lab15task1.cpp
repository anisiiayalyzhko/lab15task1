// lab15task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main() {

	//масив на два елементи 
	int array[2];

	//ввід першого елемента масиву
	printf("Enter first number:");
	scanf_s("%d", &array[0]);

	//другого
	printf("Enter second number:");
	scanf_s("%d", &array[1]);

	//(чи більше перше число за друге)
	if (array[0] > array[1]) {

		//вивести перший елемент масиву
		printf("%d", array[0]);

	}

	else {

		//вивести обидва елементи масиву
		printf("%d and %d", array[0], array[1]);

	}

	return 0;
}

