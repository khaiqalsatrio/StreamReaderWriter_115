#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "masukan nama file : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile, ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan satu karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter 4
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' kedalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam metode membaca
	ifstream infile;
	//menunjuk kesebuah file
	infile.open(NamaFile, ios::in);

	cout << endl << ">= membuka dan membaca file" << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perubahan setiap baris
		cout << endl << ">= membuka dan membaca file " << endl;
		//jika file ada maka
		if (infile.is_open())
		{
			//melakukan perulangan setiap baris
			while (getline(infile, baris))
			{
				//dan tampilkan disini
				cout << baris << '\n';
			}
			//tutup file tersebut setelahb selesai
			infile.close();
		}
		//jika tidak ditemuka file maka akan menampilkan ini
		else cout << "unable to open file";
		return 0;
	}
}