#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main (){
	mahsiswa mhs{ 1 }; //Object mhs
	mhs.showNim(); //Member Access Operator

	mahsiswa& refMhs = mhs; //Penunjuk Referensi refMhs