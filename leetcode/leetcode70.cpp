#include <iostream>
#include <cmath>
#include <map>


// Leetcode #70: Climbing stairs
/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

std::map<int, int> memo = {};


int climbStairs(int n) {
    if(memo.find(n) != memo.end()){
        return memo[n];
    }
    if(n == 0){
     return 1;
    }
    if(n < 0){
        return 0;
    }
    memo[n] = climbStairs(n-1) + climbStairs(n-2);
    return(memo[n]);
}

int main() {
	std::cout << climbStairs(2) << std::endl;
	return 0;
}