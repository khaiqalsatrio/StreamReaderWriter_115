#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan digunakan
using namespace std;

int main() {
	cout << "Awal program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1, 2, 2 };
		//pesan array integer 3 elemen
		//cout << data.at(5)<<endl;
		//memangil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan di eksekusi karena array data hanya memiliki 3 element*/

	}

}