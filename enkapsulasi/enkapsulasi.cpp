#include<iostream>
using namespace std;

class remote {
private:
	string saklarNo[10];
public:
	void setSaklar(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};