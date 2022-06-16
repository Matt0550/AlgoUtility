/*
AlgoUtility Extension
Developed by Matt05 Dev and Pall1n

Website: https://matt05.ml
Github: @Matt0550
*/

#include <iostream>

using namespace std;


class MathUtility {
public:
	template <class N>
	auto assoluto(N n) -> decltype((n <= 0) ? -1 * n : n) {
		return (n <= 0) ? -1 * n : n;
	}

	template <class N>
	auto cubo(N n) -> decltype(n) {
		return n*n*n;
	}

	int hasDivisor(int n, int d) {
		int divisori = 0;
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				divisori++;
			}
		}
		return (divisori > d) ? true : false;
	}
};

MathUtility math; // initializate class
