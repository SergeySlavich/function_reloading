//HOME WORK
#include<iostream>
#include<conio.h>
using namespace std;

//2. Перегрузить функции в проекте Functions\Arrays для типов данных double, float и char,
//написать проверчный код для всех типов;

void Fill_rand(int arr[], const int SIZE, int minRand = 0, int maxRand = 100);
void Fill_rand(double arr[], const int SIZE, double minRand = 0, double maxRand = 100);
void Fill_rand(float arr[], const int SIZE, float minRand = 0, float maxRand = 100);
void Fill_rand(char arr[], const int SIZE, char minRand = 0, char maxRand = 100);

void Print(int arr[], const int SIZE);
void Print(double arr[], const int SIZE);
void Print(float arr[], const int SIZE);
void Print(char arr[], const int SIZE);

int Sum(int arr[], const int SIZE);
double Sum(double arr[], const int SIZE);
float Sum(float arr[], const int SIZE);
char Sum(char arr[], const int SIZE);

double Avg_int(int arr[], const int SIZE);
double Avg_double(double arr[], const int SIZE);
double Avg_float(float arr[], const int SIZE);
double Avg_char(char arr[], const int SIZE);

int min_value_in(int arr[], const int SIZE);
double min_value_in(double arr[], const int SIZE);
float min_value_in(float arr[], const int SIZE);
char min_value_in(char arr[], const int SIZE);

int max_value_in(int arr[], const int SIZE);
double max_value_in(double arr[], const int SIZE);
float max_value_in(float arr[], const int SIZE);
char max_value_in(char arr[], const int SIZE);

void shift_left(int arr[], const int SIZE, int shift);
void shift_left(double arr[], const int SIZE, int shift);
void shift_left(float arr[], const int SIZE, int shift);
void shift_left(char arr[], const int SIZE, int shift);

void shift_right(int arr[], const int SIZE, int shift);
void shift_right(double arr[], const int SIZE, int shift);
void shift_right(float arr[], const int SIZE, int shift);
void shift_right(char arr[], const int SIZE, int shift);

void Sort(int arr[], const int SIZE);
void Sort(double arr[], const int SIZE);
void Sort(float arr[], const int SIZE);
void Sort(char arr[], const int SIZE);

void Unique_rand(int arr[], const int SIZE, int limit = 9);
void Unique_rand(double arr[], const int SIZE, double limit = 9);
void Unique_rand(float arr[], const int SIZE, float limit = 9);
void Unique_rand(char arr[], const int SIZE, char limit = 9);

void Search(int arr[], const int SIZE);
void Search(double arr[], const int SIZE);
void Search(float arr[], const int SIZE);
void Search(char arr[], const int SIZE);

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\t\tHomeWork FUNCTIONS. Reload function\n";
	cout << "\t\t***Домашнее задание \"Функции. Перегрузка функций.\"***\n\n";
	const int SIZE = 10;
	int shift = 0;
	int limit;

	int arr_int[SIZE] = {};
	double arr_double[SIZE] = {};
	float arr_float[SIZE] = {};
	char arr_char[SIZE] = {};

	int uniq_arr_int[SIZE] = {};
	double uniq_arr_double[SIZE] = {};
	float uniq_arr_float[SIZE] = {};
	char uniq_arr_char[SIZE] = {};
	int arr_сount[SIZE] = {};

	cout << "Массив \"int\":\n";
	Fill_rand(arr_int, SIZE);
	Print(arr_int, SIZE);
	cout << "Массив \"double\":\n";
	Fill_rand(arr_double, SIZE);
	Print(arr_double, SIZE);
	cout << "Массив \"float\":\n";
	Fill_rand(arr_float, SIZE);
	Print(arr_float, SIZE);
	cout << "Массив \"char\":\n";
	Fill_rand(arr_char, SIZE);
	Print(arr_char, SIZE);

	cout << "\tСумма всех элементов массива \"int\" равна: " << Sum(arr_int, SIZE) << endl;
	cout << "\tСумма всех элементов массива \"double\" равна: " << Sum(arr_double, SIZE) << endl;
	cout << "\tСумма всех элементов массива \"float\" равна: " << Sum(arr_float, SIZE) << endl;
	cout << "\tСумма всех элементов массива \"char\" равна: " << Sum(arr_char, SIZE) << endl;

	cout << "\tСредне-арифметическое всех элементов массива\"int\" равно: " << Avg_int(arr_int, SIZE) << endl;
	cout << "\tСредне-арифметическое всех элементов массива\"double\" равно: " << Avg_double(arr_double, SIZE) << endl;
	cout << "\tСредне-арифметическое всех элементов массива\"float\" равно: " << Avg_float(arr_float, SIZE) << endl;
	cout << "\tСредне-арифметическое всех элементов массива\"char\" равно: " << Avg_char(arr_char, SIZE) << endl;

	cout << "\tМинимальное значение массива \"int\" равно: " << min_value_in(arr_int, SIZE) << endl;
	cout << "\tМинимальное значение массива \"double\" равно: " << min_value_in(arr_double, SIZE) << endl;
	cout << "\tМинимальное значение массива \"float\" равно: " << min_value_in(arr_float, SIZE) << endl;
	cout << "\tМинимальное значение массива \"char\" равно: " << min_value_in(arr_char, SIZE) << endl;

	cout << "\tМаксимальное значение массива \"int\" равно: " << max_value_in(arr_int, SIZE) << endl << endl;
	cout << "\tМаксимальное значение массива \"double\" равно: " << max_value_in(arr_double, SIZE) << endl << endl;
	cout << "\tМаксимальное значение массива \"float\" равно: " << max_value_in(arr_float, SIZE) << endl << endl;
	cout << "\tМаксимальное значение массива \"char\" равно: " << max_value_in(arr_char, SIZE) << endl << endl;

	cout << "Введите значение, на которое нужно сдвинуть массив влево:"; cin >> shift;
	shift_left(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	shift_left(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	shift_left(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	shift_left(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "Введите значение, на которое нужно сдвинуть массив вправо:"; cin >> shift;
	shift_right(arr_int, SIZE, shift);
	Print(arr_int, SIZE);
	shift_right(arr_double, SIZE, shift);
	Print(arr_double, SIZE);
	shift_right(arr_float, SIZE, shift);
	Print(arr_float, SIZE);
	shift_right(arr_char, SIZE, shift);
	Print(arr_char, SIZE);

	cout << "\t\tСортировка массива.\n";
	cout << "Массив \"int\":\n";
	Sort(arr_int, SIZE);
	Print(arr_int, SIZE);
	cout << "Массив \"double\":\n";
	Sort(arr_double, SIZE);
	Print(arr_double, SIZE);
	cout << "Массив \"float\":\n";
	Sort(arr_float, SIZE);
	Print(arr_float, SIZE);
	cout << "Массив \"char\":\n";
	Sort(arr_char, SIZE);
	Print(arr_char, SIZE);

	cout << "\n\tМассив уникальных значений:\n";
	cout << "Введите предельное значение массива:"; cin >> limit;
	cout << "Массив \"int\":\n";
	Unique_rand(uniq_arr_int, SIZE, limit);
	Print(uniq_arr_int, SIZE);
	cout << "Массив \"double\":\n";
	Unique_rand(uniq_arr_double, SIZE, limit);
	Print(uniq_arr_double, SIZE);
	cout << "Массив \"float\":\n";
	Unique_rand(uniq_arr_float, SIZE, limit);
	Print(uniq_arr_float, SIZE);
	cout << "Массив \"char\":\n";
	Unique_rand(uniq_arr_char, SIZE, limit);
	Print(uniq_arr_char, SIZE);

	cout << "\n\tПоиск повторяющихся значений из массива int arr[]:\n";
	Print(arr_int, SIZE);
	Search(arr_int, SIZE);
	cout << "\n\tПоиск повторяющихся значений из массива double arr[]:\n";
	Print(arr_double, SIZE);
	Search(arr_double, SIZE);
	cout << "\n\tПоиск повторяющихся значений из массива float arr[]:\n";
	Print(arr_float, SIZE);
	Search(arr_float, SIZE);
	cout << "\n\tПоиск повторяющихся значений из массива char arr[]:\n";
	Print(arr_char, SIZE);
	Search(arr_char, SIZE);
}

void Fill_rand(int arr[], const int SIZE,  int min_rand, int max_rand)
{
	if (min_rand == max_rand) max_rand++;
	if (min_rand > max_rand)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (max_rand - min_rand) + min_rand;
	}
}

void Fill_rand(double arr[], const int SIZE, double min_rand, double max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
		while (arr[i] >= max_rand) arr[i] /= 10;
	}
}

void Fill_rand(float arr[], const int SIZE, float min_rand, float max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
		while (arr[i] >= max_rand) arr[i] /= 10;
	}
}

void Fill_rand(char arr[], const int SIZE, char min_rand, char max_rand)
{
	if ((max_rand - min_rand) == 0) max_rand++;
	if ((min_rand - max_rand) > 0)
	{
		int buffer = min_rand;
		min_rand = max_rand;
		max_rand = buffer;
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (int)(max_rand - min_rand) + min_rand;
	}
}

void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

void Print(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

void Print(float arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

void Print(char arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}

int Sum(int arr[], const int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int SIZE)
{
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int SIZE)
{
	float sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(char arr[], const int SIZE)
{
	char sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg_int(int arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg_double(double arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg_float(float arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg_char(char arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

int min_value_in(int arr[], const int SIZE)
{
	int min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

double min_value_in(double arr[], const int SIZE)
{
	double min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (min - arr[i] > 0) min = arr[i];
	}
	return min;
}

float min_value_in(float arr[], const int SIZE)
{
	float min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (min - arr[i] > 0) min = arr[i];
	}
	return min;
}

char min_value_in(char arr[], const int SIZE)
{
	char min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int max_value_in(int arr[], const int SIZE)
{
	int max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

double max_value_in(double arr[], const int SIZE)
{
	double max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if ((max - arr[i]) < 0) max = arr[i];
	}
	return max;
}

float max_value_in(float arr[], const int SIZE)
{
	float max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if ((max - arr[i]) < 0) max = arr[i];
	}
	return max;
}

char max_value_in(char arr[], const int SIZE)
{
	char max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void shift_left(int arr[], const int SIZE, int shift)
{
	
	for (int j = 0; j < shift; j++)
	{
		int temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_left(double arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		int temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_left(float arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		int temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_left(char arr[], const int SIZE, int shift)
{

	for (int j = 0; j < shift; j++)
	{
		int temp = arr[0];
		for (int i = 1; i < SIZE; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = temp;
	}
}

void shift_right(int arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		int temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void shift_right(double arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		int temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void shift_right(float arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		int temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void shift_right(char arr[], const int SIZE, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		int temp = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

void Sort(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Sort(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		double min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[j] - arr[i]) < 0)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Sort(float arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		float min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[j] - arr[i]) < 0)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Sort(char arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		char min = arr[i];
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[j] - arr[i]) < 0)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void Unique_rand(int arr[], const int SIZE, int limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (limit + 1);
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j]) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Unique_rand(double arr[], const int SIZE, double limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (int)(limit + 1);
			for (int j = 0; j < i; j++)
			{
				if ((arr[i] - arr[j]) == 0) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Unique_rand(float arr[], const int SIZE, float limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (int)(limit + 1);
			for (int j = 0; j < i; j++)
			{
				if ((arr[i] - arr[j]) == 0) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Unique_rand(char arr[], const int SIZE, char limit)
{
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = rand() % (limit + 1);
			for (int j = 0; j < i; j++)
			{
				if ((arr[i] - arr[j]) == 0) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
}

void Search(int arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[i] - arr[j]) == 0) count++;
			for (int l = 0; l < i; l++)
			{
				if ((arr[i] - arr[l]) == 0)
				{
					counting = false;
					count = 0;
				}
			}
			if (count == 1 && counting)
			{
				cout << "\tПовторяющееся значение: ";
				counting = false;
				printing = true;
			}
		}
		if (count > 0) cout << arr[i] << " повторяется " << count + 1 << (((count - 1) % 10 < 5) ? " раза.\n" : " раз.\n");
	}
	if (!printing) cout << "Повторяющихся значений не обнаружено.\n";
}

void Search(double arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[i] - arr[j]) == 0) count++;
			for (int l = 0; l < i; l++)
			{
				if ((arr[i] - arr[l]) == 0)
				{
					counting = false;
					count = 0;
				}
			}
			if (count == 1 && counting)
			{
				cout << "\tПовторяющееся значение: ";
				counting = false;
				printing = true;
			}
		}
		if (count > 0) cout << arr[i] << " повторяется " << count + 1 << (((count - 1) % 10 < 5) ? " раза.\n" : " раз.\n");
	}
	if (!printing) cout << "Повторяющихся значений не обнаружено.\n";
}

void Search(float arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[i] - arr[j]) == 0) count++;
			for (int l = 0; l < i; l++)
			{
				if ((arr[i] - arr[l]) == 0)
				{
					counting = false;
					count = 0;
				}
			}
			if (count == 1 && counting)
			{
				cout << "\tПовторяющееся значение: ";
				counting = false;
				printing = true;
			}
		}
		if (count > 0) cout << arr[i] << " повторяется " << count + 1 << (((count - 1) % 10 < 5) ? " раза.\n" : " раз.\n");
	}
	if (!printing) cout << "Повторяющихся значений не обнаружено.\n";
}

void Search(char arr[], const int SIZE)
{
	bool printing = false;
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		bool counting = true;
		for (int j = i + 1; j < SIZE; j++)
		{
			if ((arr[i] - arr[j]) == 0) count++;
			for (int l = 0; l < i; l++)
			{
				if ((arr[i] - arr[l]) == 0)
				{
					counting = false;
					count = 0;
				}
			}
			if (count == 1 && counting)
			{
				cout << "\tПовторяющееся значение: ";
				counting = false;
				printing = true;
			}
		}
		if (count > 0) cout << arr[i] << " повторяется " << count + 1 << (((count - 1) % 10 < 5) ? " раза.\n" : " раз.\n");
	}
	if (!printing) cout << "Повторяющихся значений не обнаружено.\n";
}
