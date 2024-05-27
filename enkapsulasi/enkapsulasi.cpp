#include<iostream>
using namespace std;

class remote {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
    remote LampuRumah;

    LampuRumah.setSaklarNo(0, "lampu Teras Rumah");
    LampuRumah.setSaklarNo(1, "Lampu Ruang Tidur");
    LampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    LampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << LampuRumah.getSaklarNo(0) << endl;
    cout << LampuRumah.getSaklarNo(1) << endl;
    cout << LampuRumah.getSaklarNo(2) << endl;
    cout << LampuRumah.getSaklarNo(3) << endl;

    return 0;

}