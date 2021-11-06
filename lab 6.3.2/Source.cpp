// Варіант 6(Рекурсивний спосіб)
#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Init(int* b, const int n, int i)
{
	if (i < n)
	{
		b[i] = -10 + rand() % 31;
		return Init(b, n, i + 1);
	}
}

template<typename T>
void Init(T* b, const int n, int i)
{
	if (i < n)
	{
		b[i] = -10 + rand() % 31;
		return Init(b, n, i + 1);
	}
}

void Print(int* b, const int n, int i)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ,";
    cout << " }";
}

template<typename T>
void Print(T* b, const int n, int i)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ,";
    cout << " }";
}

int Sum(int b[], const int n,int i)
{
	if (i < n)
	     return b[i] + Sum(b, n, i + 1);
	else
	     return 0;
}

template<typename T>
T Sum(T b[], const int n,int i)
{
	if (i < n)
	     return b[i] + Sum(b, n, i + 1);
	else
	     return 0;
}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int* b = new int[n];
	Init<int>(b, n, 0);
	Print<int>(b, n, 0);
	Sum<int>(b, n, 0);
	cout << "S = " << Sum(b, n, 0) << endl;
	delete[] b;
	b = nullptr;
	return 0;
}