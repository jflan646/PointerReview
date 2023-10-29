// intro comment 
#include <iostream>
using namespace std;
int doSomething(int& x, int& y);
int doSomething2(int* x, int* y);
int main()
{
	int x = 1; 
	int y = 1;
	int z = 1;
	cout << doSomething(x, y) << endl;
	x = 1;
	y = 1;
	cout << doSomething2(&x, &y) << endl;;

}
/*what is done here*/
int doSomething(int& x, int& y) {
	int temp = x;
	x = y + 10;
	y = temp * 10;
	return x + y;
}
int doSomething2(int* x, int* y) {
	int temp = *x;
	*x = *y + 10;
	*y = temp * 10;
	return (*x + *y);
}