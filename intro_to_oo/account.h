// file account.h yang akan dipanggil accountTest.cpp
#include<string>

class account {
	public :
		//member function setName menyimpan string
		//ke objek yang ada di accountTest
		void setName(std::string accountName) {
			name = accountName;
		}
	// dapatkan nama account dari sebuah objek
	std::string getName() const {
		return name;
	}

	private : 
		std::string name;
};
