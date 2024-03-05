
// Soal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int nilMtk, nilBahasa, nilFisika;
	string status;
	float rerata;

	cout << Nilai Matematika : << endl;
	cin >> nilMtk;
	cout << Nilai Bahasa : << endl;
	cin >> nilBahasa;
	cout << Nilai Fisika : << endl;
	cin >> nilFisika;

	rerata = (nilBahasa + nilMtk) / 2;

	if (nilMtk > 70 || rerata > 60) {
		status = Lulus;
	}
	else {
		status = Tidak Lulus;
	}

	cout << Nilai Matematika : << nilMtk << endl;
	cout << Nilai Bahasa : << nilBahasa << endl;
	cout << Nilai Fisika : << nilFisika << endl;
	cout << Status Kelulusan : << status;
}