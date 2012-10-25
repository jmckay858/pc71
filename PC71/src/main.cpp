//============================================================================
// PC 6.1 - Markup
// -------------------------
// Programmer: Jeremy F McKay
// Date: October 23, 2012
// -------------------------
// This program will ask the user to input 10 numbers then show the largest
// number, the smallest number, the sum of the numbers and the average.
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
using namespace std;
//fills the array with user input
void fillArray(int numbers[],int SIZE);
//Shows the largest number
void showLarge(int numbers[],int SIZE);
//Shows the lowest number
void showLow(int numbers[],int SIZE);
//finds and displays the Sum
void findSum(int numbers[],int SIZE,int &sum);
//finds and display the average
void findAverage(int total,int SIZE);


int main() {
	const int SIZE = 10;
	int numbers[SIZE];
	int sum;

	cout << endl;
	fillArray(numbers, SIZE);
	showLarge(numbers, SIZE);
	showLow(numbers, SIZE);
	findSum(numbers, SIZE, sum);
	findAverage(sum, SIZE);
    cout << endl;
	return 0;
}

void fillArray(int numbers[], int SIZE)
{
	for(int n = 0;n < SIZE; n++)
	{
		cout << "   "
			 << "Enter a number: ";
		cin >> numbers[n];

	}
}

void showLarge(int numbers[], int SIZE)
{
	int count;
	int highest;
	highest = numbers[0];
	for (count = 1; count < SIZE; count++)
	{
		if (numbers[count] > highest)
			highest = numbers[count];
	}
	cout << "\n   "
		 << "The highest number is: "
		 << highest << endl;
}

void showLow(int numbers[], int SIZE)
{
	int count;
	int lowest;
	lowest = numbers[0];
	for (count = 1; count < SIZE; count++)
	{
		if (numbers[count] < lowest)
		lowest = numbers[count];
	}
	cout << "\n   "
		 << "The lowest number is: "
		 << lowest << endl;
}

void findSum(int numbers[], int SIZE,int &sum)
{
	int tnum;
	for(tnum = 0; tnum < SIZE; tnum++)
	  sum += numbers[tnum];
	cout << "\n   "
		 << "The sum of the numbers are: "
		 << sum << endl;
}

void findAverage(int total, int SIZE)
{
	int average;
	average = total / SIZE;
	cout << "\n   "
		 << "The average is: "
		 << average << endl;
}

