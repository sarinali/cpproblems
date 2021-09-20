import java.io.*;
import java.util.Scanner;
 
public class recursion {
	static long [] memo = new long[100];
    public static void main(String[] args) {
    	//1, 1, 2, 3, 5, 8, 13, 21
//    	for(int i=1; i<=60; i++) {
//    		System.out.println("fib[" + i + "] = " + fib(i));
//    	}
    	hanoi(4, 'A', 'B', 'C');
    }
    static void hanoi(int n, char a, char b, char c) {
    	if(n == 1) {
    		System.out.println(a + " --> " + c);
    		return;
    	}
    	hanoi(n-1, a, c, b);
    	System.out.println(a + " --> " + c);
    	hanoi(n-1, b, a, c);
    }
    static long fib(int n) { // calculate the n-th fib num
    	if(memo[n] > 0) return memo[n];
    	if(n <= 2) return memo[n] = 1;
    	return memo[n] = fib(n-1) + fib(n-2);
    }
    static long gcd(long m, long n) {
    	if(n == 0) return m;
    	return gcd(n, m%n);
    }
    static int f(int x) {
    	if(x == 0) {
    		return 0;
    	}
    	int ans = 2*f(x-1) + x*x;
    	return ans;
    }
    static int bad(int n) {
    	if(n == 0) {
    		return 0;
    	}
    	return bad(n/3 + 1);
    }
    static long quickpow(long x, long n, long mod) {
    	if(n == 0) return 1;
    	long t = quickpow(x, n/2, mod);
    	t = t*t % mod;
    	if(n % 2 == 0) return t;
    	return t*x % mod;
    }
    static long factorial(int n) {
    	if(n == 0) return 1;
    	return n * factorial(n-1);
    }
 
}