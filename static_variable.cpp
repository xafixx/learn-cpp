/*
 * variabel static akan tetap ada
 * selama program berjalan.
 *
 */
#include<bits/stdc++.h>

// hati-hati dengan penamaan variabel seperti count
// karena akan dianggap ambigous oleh compiler
// count yang satu dari namespace std:: maka dari itu
// disini saya tidak menggunakan namespace
int count = 0;

// jika fungsi dipanggil nilai tidak berubah
// misal dipanggil duakali dari fungsi main
// maka hasilnya adalah 1 dan 2 berurutan
// bergantung pada banyaknya pemanggilan di fungsi main
int func_1() {
	static int hitung = 0;  //coba eksperimen hapus keyword static dan lihat hasilnya
	hitung++;
	return hitung;
}

//jika menggunakan variabel global
//hasilnya akan sama seperti fungsi func()
int func_2() {
	count++;
	return count;
}

int main() {
	
	// memanggil func_1() duakali
	std::cout << func_1() << "\n";
	std::cout << func_1() << "\n\n";
	
	//memanggil func_2 duakali
	std::cout << func_2() << "\n";
	std::cout << func_2() << "\n";

}
