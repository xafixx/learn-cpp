// membuat dan memanipulasi objek Account
#include<iostream>
#include<string>
#include "account.h"

using namespace std;

int main() {
	account myAccount; // buat objek account dengan nama myAccount
	
	// tampilkan nama account
	cout << "Nama akun : " << myAccount.getName();

	cout << "\nMasukkan nama account : ";
	string namaAccount;
	getline(cin, namaAccount); // baca string
	myAccount.setName(namaAccount); // masukkan namaAccount ke myAccount

	
	// tampilkan nama yang disimpan di objek myAccount
	cout << "Nama di objek myAccount adalah : "
		<< myAccount.getName() << endl;
}
