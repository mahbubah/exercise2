	#include <iostream>
#include "addition.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a = 32;
	int b = 65;
	
	Addition addition;
	int sum = addition.add(a, b);
	cout << sum;
    return 0;
}
