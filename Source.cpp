#include<iostream>
#include<conio.h>
using namespace std;

void calc() {
	cout << "Choose operation  : " << endl << "1 - Addition;endl <<	2 - Subtraction;  endl << 3 - Division;endl <<	 4 - Multiplication  ->:endl << (5 - for Exit)";
}

int first = 1;
int second = 10;

float firstNumber = 0;
float secondNumber = 0;
float calc_result = 0;

void calc_nice() {
	char arr[3][16] = {
		{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
		{'#','#','#','C','A','L','C','U','L','A','T','O','R','#','#','#'},
		{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (arr[i][j] == '#') {
				cout << char(219);
			}
			else cout << arr[i][j];
		}
		cout << endl;
	}
}

float add(float a, float b) { //додавання
	return a + b;
}

float sub(float a, float b) { // вiднiмання
	return a - b;
}

float div(float a, float b) { //дiлення
	return a / b;
}

float mul(float a, float b) { //множення
	return a * b;
}

int main() {
	int choise = 0;
	int yes_no = 1;

	do {
		system("cls");
		calc_nice();
		cout << endl;
		calc();
		cin >> choise;
		if (choise > 5 || choise < 1) {
			cout << "Chose operation: (1-4) or 5 for Exit" << endl;
			cin >> choise;
			calc();
		}
		if (choise == 5) {
			yes_no = 0;
			break;
		};

		cout << "Enter first number:   -->  ";
		cin >> firstNumber;
		cout << "Enter second number:   -->  ";
		cin >> secondNumber;
		if (choise == 3 && secondNumber == 0) {
			cout << "You cannot divide by ZERO!";
			system("pause");
			continue;
		}
		switch (choise)
		{
		case 1: {
			calc_result = add(firstNumber, secondNumber);
			cout << firstNumber << " + " << secondNumber << " = " << calc_result << endl;
		}break;

		case 2: {
			calc_result = sub(firstNumber, secondNumber);
			cout << firstNumber << " - " << secondNumber << " = " << calc_result << endl;
		}break;

		case 3: {
			calc_result = div(firstNumber, secondNumber);
			cout << firstNumber << " / " << secondNumber << " = " << calc_result << endl;
		}break;

		case 4: {
			calc_result = mul(firstNumber, secondNumber);
			cout << firstNumber << " * " << secondNumber << " = " << calc_result << endl;
		}break;

		case 5: {
			yes_no = 0;
		}break;
			break;
		}
		system("pause");
	} while (yes_no == 1);

	return 0;
}