/*
    Author: Suryapratap Singh Suryavanshi
    Date: 01/16/2024
    Version: 1.0.0
*/

#include<stdio.h>

// Method: return n'th fibonacci number, recursive approach
int fib(int n) {
    if(n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int res = fib(n);
    printf("%d'th fibonacci number is: %d\n", n, res);
}
