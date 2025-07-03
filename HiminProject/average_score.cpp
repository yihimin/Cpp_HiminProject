#include <iostream>
#include "average_score.h"
using namespace std;

void solve_average_score() {
	int N = 0;
	int A[1000];
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int sum = 0;
	int M = A[0];

	for (int i = 0; i < N; i++) {
		if (A[i] > M) {
			M = A[i];
		}
		sum += A[i];
	}
	double average = (double)sum * 100 / M / N;
	cout << average;
}