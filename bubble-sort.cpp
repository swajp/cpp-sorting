#include <iostream>

void sortArray(int array[], int size);

int main()
{
	int numbers[] = { 4, 3, 5, 9, 1, 10, 2, 6, 8, 7 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	sortArray(numbers, size);

	for (int number : numbers)
		std::cout << number << std::endl;

	return 0;
}
void sortArray(int array[], int size)
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
