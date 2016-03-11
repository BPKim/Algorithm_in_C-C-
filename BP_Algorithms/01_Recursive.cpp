#include <iostream>
#include "List.h"

using namespace std;

#define MAXN 200

/* 1.1 ���丮�� ����ϱ� */
// �׳� factorial
int factorial(int n) {
	int r, i;

	r = 1;

	for (i = 2; i <= n; i++)
		r *= i;

	return r;
}
// ����� factorial()
int recursive_factorial(int n) {

	if (n == 1)
		return 1;

	return n * recursive_factorial(n - 1);
}


/* 1.2 ���Ḯ��Ʈ ����ϱ� */
// LinkedList.cpp

/* 1.3 ���װ�� */
// nC0 = nCn = 1;
// r>1, nCr = n-1Cr-1 + n-1Cr

long long choose(int n, int r) {

	if (n == r)
		return 1;
	if (r == 0)
		return 1;

	return choose(n - 1, r - 1) + choose(n - 1, r);
}
// memoization 
// �ߺ����� ����
long long choose_memo(int n, int r) {

	static long long memo[MAXN][MAXN];

	if (memo[MAXN][MAXN] > 0)
		return memo[MAXN][MAXN];

	if (n == r)
		return 1;
	if (r == 0)
		return 1;

	return memo[MAXN][MAXN] =choose(n - 1, r - 1) + choose(n - 1, r);
}

/* 1.4 �Ǻ���ġ */
long long fibo(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;

	return fibo(n - 1) + fibo(n - 2);

}

/*1.5 �ݾ׸��߱�*/

int pay(int bills[], int m, int n) {
	int count = 0;

	if (n == 1) {
		if (m%bills[0] == 0)
			return 1;
		else
			return 0;
	}
	int t = m / bills[n - 1];
	
	for (int i = 0; i <=t; i++){
		count += pay(bills, m - bills[n - 1] * i, n - 1);
	}

	return count;
}

/* 1.6 ������ */
/*
	���� m�� n���� ���� ����
*/
int partition(int m, int n) {

	static int memo[MAXN][MAXN];

	if (m < 0) 
		return 0;

	if (m == 0) {
		return 1;
	}
	int count = 0;

	for (int i = n; i > 0; i--) {
		count += partition(m - i, i);
	}
	return count;
}
int partition_memo(int m, int n) {

	static int memo[MAXN][MAXN];

	
	if (m < 0)
		return 0;

	if (memo[MAXN][MAXN]>0)
		return memo[MAXN][MAXN];

	if (m == 0)
		return 1;

	int count = 0;

	for (int i = 1; i <= n; i++)
		count += partition_memo(m - i, i);

	return memo[MAXN][MAXN] = count;
}

int main()
{
	int result1, result2;
	long long ch;
	cout << "1.1 ���丮��" << endl;
	result1 = factorial(5);
	result2 = recursive_factorial(5);

	cout << result1 << endl;
	cout << result2 << endl;

	cout << "1.3 ���װ��" << endl;
	cout << choose(5, 3) << endl;
	cout << choose_memo(5, 3) << endl;


	cout << "1.2 ���Ḯ��Ʈ" << endl;
	LinkedList list;

	list.init();

	for (int i = 0; i < 10; i ++)
		list.addNode(i);

	//list.recursivePrintList();

	list.printList();

	cout << "1.5 �ݾ׸��߱�" << endl;
	int bills []= { 1000, 5000, 10000, 50000 };

	//cout << pay(bills, 25000, 4) << endl;
	pay(bills, 25000, 4);

	cout << partition(5, 3) << endl;


	return 0;
}