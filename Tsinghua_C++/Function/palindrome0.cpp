//判断n是否是回文数
#include <iostream>
using namespace std;

bool symm(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i > 0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m ==n
}
