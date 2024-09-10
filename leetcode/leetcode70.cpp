#include <iostream>
#include <cmath>


// Leetcode #70: Climbing stairs
/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

int factorial(int n) {
	if (n <= 0) return 1;
	return n * factorial(n - 1);
}
int nCr(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int climbStairs(int n) {
	int twos = std::floor(n / 2);
	int result = 0;
	for (int i = 0; i <= twos; i++) {
		result += nCr(n - i - i + 1, i);
	}
	return result;
}

int main() {
	std::cout << climbStairs(2) << std::endl;
	return 0;
}