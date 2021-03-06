// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

void StringMid(float** A, float* B, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		float sum = 0;
		for (int j = 0; j < n; j++)
		{	
			sum += A[i][j];
		};
		B[i] = sum / n;
	}
	for (int i = 0; i < m; i++)
	{
		cout << i << " string: " << B[i] << "; ";
	}
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << endl;
	float* B;
	B = new float [m];
	float** A;
	A = new float* [m];
	A[0] = new float[m * n];
	for (int i = 1; i < m; i++)
	{
		A[i] = A[0] + i * n;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
		cout << endl;
	}
	StringMid(A,B, m, n);
	delete[] A[0];
	delete[] A;
	delete[] B;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
