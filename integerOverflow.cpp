#include <iostream>
using namespace std;

int main()
{
    int x = -1463847412;
    int res = 0;
	int max = (1 << 31) - 1;
	int min = - 1 * (1 << 31);
	while (x != 0) {
		if (max / 10 < res || max / 10 == res && max % 10 < x % 10) {
			cout << 0 << endl;
			return 0;
		}
		if (min / 10 > res || min / 10 == res && min % 10 > x % 10) {
			cout << 0 << endl;
			return 0;
		}
		res = res * 10 + x % 10;
		x /= 10;
	}
	cout << res << endl;
	return 0;
}
