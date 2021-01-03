/*
 *
 *	contoh program rekursif untuk
 *	menambahkan nilai sebanyak n-kali
 *	
 *	contoh masukkan : 
 *			3
 *	contoh keluaran :
 *			6
 */
#include<bits/stdc++.h>

using namespace std;

// fungsi untuk menambahkan bilangan n-kali
int add(int n) {
	int total = 0;
	if(n <= 0) { // terminasi jika n sama dengan 0
		return n;
	} else {
		total += n + add(n -1);
	}
	
	return total;
}

int main() {
	
	// banyak bilangan yang akan dimasukkan
	int n;
	cin >> n;

	cout << add(n) << "\n";
}
