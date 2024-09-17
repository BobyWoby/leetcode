#include <iostream>
#include <cmath>
#include <map>
#include <vector>


// Leetcode #70: Climbing stairs
/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

// Bottom Up
int climbStairs1(int n) {
    std::vector<int> vec(n+1, -1);
    vec[0] = vec[1] = 1;
    for (int i = 2; i <= n; i++) {
        vec[i] = vec[i - 1] + vec[i - 2];
    }
    return vec[n];
}


// Top Down
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