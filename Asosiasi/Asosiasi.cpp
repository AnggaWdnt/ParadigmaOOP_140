#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) : nama(pNama) {
		cout << "Pasien \"" << nama << "\" ada\n";
	}
	~pasien() {
		cout << "Pasien \"" << nama << "\" tidak ada\n";
	}
	void tambahanDokter(dokter*);
	void cetakDokter();
};

class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\" ada\n";
	}
	void tambahanPasien(pasien*);
	void cetakPasien();
};

void pasien::tambahanDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::tambahanPasien(pasien* pPasien) {
	daftar_pasien.push_back(pPasien);
	pPasien->tambahanDokter(this);
}
