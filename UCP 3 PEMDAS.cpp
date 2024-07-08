#include <iostream>
using namespace std;

class MasukUniversitas {
public:
	string uangBangunan;
	MasukUniversitas(string pUangBangunan) :
		uangBangunan(pUangBangunan) {
		cout << "MasukUniversitas dibuat\n" << endl;
	}

	~MasukUniversitas() {
		cout << "MasukUniversitas dihapus\n" << endl;
	}

	int uangPendaftaran (int a, int b) {
		return a = b;
	
	}

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		//
	}

	virtual void namaJalurMasuk() { return; }
	//

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}

	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangPendaftaran(int i, string value) {
		uangPendaftaran[i] = value;
	}

};

class SNBT : public MasukUniversitas {
	//
};

class SNBP : public MasukUniversitas {
	//
};

int main() {
	MasukUniversitas ak;
	ak.setUangPendaftaran("mahal", "sedang", "murah",);
	ak.setUangBangunan();

	return 0;
}



