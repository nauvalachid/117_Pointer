#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 }; //Object mhs
	mhs.showNim(); //Member Access Operator

	mahasiswa& refMhs = mhs; //Penunjuk Referensi refMhs
	refMhs.nim = 2; //Member Access Operator
	mhs, showNim();

	mahasiswa* pMhs = &mhs; //Penunjuk Deferensi pMhs
	pMhs->nim = 3; //Arrow Operator