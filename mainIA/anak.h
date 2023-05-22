#ifndef ANAK.H
#define ANAK.H

class anak {
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "anak \"" << nama << "\" ada\n";
	}
	~anak() {
		cout << "Anak \"" << nama << "\" tidak ada\n";
	}
};
#endif
