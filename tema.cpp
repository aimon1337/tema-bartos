// 1
#include <iostream>
using namespace std;
int main() {
	int s = 0, a;
	do {
		cin >> a;
		s += a;
	} while (a != 0);
	cout << s;
	return 0;
}

//2
#include <iostream>
using namespace std;
int main() {
	int i;
	for (i = 1; i <= 50; i = i + 2) {
		cout << i << " ";
	}
	cout << '\n';
	for (i = 50; i <= 100; i = i + 2)
		cout << i << " ";
	return 0;
}

//3
#include <iostream>
using namespace std;
int main() {
	int a, b, c, max = -1e9;
	cin >> a >> b >> c;
	if (max < a)
		max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	cout << max;
	return 0;
}

//4
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b;
	c = 100 * (a / 100 % 10);
	if (a / 10 % 10 > b / 10 % 10)
		c = c + ((a / 10 % 10) * 10);
	else
		c = c + ((b / 10 % 10) * 10);
	c = c + (a % 10 + b % 10) / 2;
	cout << c;
	return 0;
}

//5.1
#include <iostream>
using namespace std;
int main() {
	int x, s;
	cin >> x;
	s = x;
	while (s < 100) {
		cin >> x;
		s += x;
	}
	cout << s;
	return 0;
}

//5.2
#include <iostream>
using namespace std;
int main() {
	int s = 0, x;
	do {
		cin >> x;
		s += x;
	} while (s < 100);
	cout << s;
	return 0;
}

//6
#include <iostream>
using namespace std;
int main() {
	int x, y, r;
	cin >> x >> y;
	while (y) {
		r = x % y;
		x = y;
		y = r;
	}
	cout << x;
	return 0;
}

//8
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x <= 15) {
		cout << x * x;
	}
	else
		if (x >= 16 && x <= 30)
			cout << (x % 10 + x / 10);
		else
			cout << ((x % 10) * (x / 10));
	return 0;
}