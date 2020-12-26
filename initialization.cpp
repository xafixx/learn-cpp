/*belajar bagaimana inisialisasi pada c++*/
#include<iostream>

using namespace std;

int main() {
	int x = 10; //c-like initialization
	int y (11); //constructor initialization
	int z {12}; //uniform initialization

	cout << x << " " 
		 << y << " " 
		 << z << "\n";
}
