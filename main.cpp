#include<iostream>
using namespace std;
double bn(double b, double q, double n, double &counter);
double sum(double b, double q, double n, double counter, double s);
int main()
{
	double counter = 1;
	double b, q, n;
	cout << "b(the first element of geometric progression): "; cin >> b;
	cout << "q(the denominator): "; cin >> q;
	cout << "n(quantity of elements): "; cin >> n;
	cout << "b(n): " << bn(b, q, n, counter) << endl<<"sum(n): " << sum(b, q, n, 1, b)
		<< endl<<"depth of the recursion: " << counter - 1<< endl <<"recurrence relation for bn = q = " << q << endl;
} 
double bn(double b, double q, double n, double &counter)
{
	cout << "level: " << counter << endl;
	if (counter++ == n)
	{
		return b;
	}
	else
	{
		b *= q;
	}
	bn(b, q, n, counter);
}
double sum(double b, double q, double n, double counter, double s)
{
	if (counter++ == n)
	{
		return s;
	}
	else
	{
		b *= q;
		s += b;
	}
	sum(b, q, n, counter, s);
}