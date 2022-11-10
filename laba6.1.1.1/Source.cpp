
#include <iostream> 
#include <iomanip> 
#include <time.h> 
using namespace std;
void mas(int* c, const int size, const int max, const int min)
{
	for (int i = 0; i < size; i++) {
		c[i] = min + rand() % (max - min + 1);
		cout << c[i] << " ";
	}
}
void sum(int* c, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++) {
		if ((c[i] % 2 != 0) || (i % 13 != 0))
		{
			S += c[i];
		}
	}
	cout << endl;
	cout << "Sum = " << S << endl;
}
void count(int* c, const int size)
{
	int C = 0;
	for (int i = 0; i < size; i++) {
		if ((c[i] % 2 != 0) || (i % 13 != 0))
		{
			C++;
		}
	}
	cout << endl;
	cout << "Count = " << C << endl;
}
void obn(int* c, const int size)
{
	for (int i = 0; i < size; i++) {
		if ((c[i] % 2 != 0) || (i % 13 != 0))
		{
			c[i] = 0;
		}
		cout << c[i] << " ";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 21;
	int r[n];
	int max = 85;
	int min = 15;
	mas(r, n, max, min);
	sum(r, n);
	count(r, n);
	obn(r, n);
	return 0;
}

