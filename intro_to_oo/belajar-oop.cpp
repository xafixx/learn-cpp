/* definisi fungsi diluar class */
#include<iostream>

using namespace std;

class myclass {
	public : 
		int myMethod(int a);
};

int myclass::myMethod(int a) {
	return a + a + a;
}

int main() {
	myclass obj;
	int x = 10;
	cout << obj.myMethod(x) << "\n"; 
}
