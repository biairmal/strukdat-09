/*
Nama	: Bandana Irmal Abdillah
NPM		: 140810180025
Tanggal	: 7 Mei 2019
Deskripsi: exercise-01 strukdat-09
*/

#include <iostream>
using namespace std;

const int maxstack = 255;

struct stack{
	char info[maxstack];
	int top;
};

stack s;

void craeteStack(stack& s){
	s.top = -1;
}


void insertStack(stack& s, char& elemenBaru){
	cout << "Masukkan data : "; cin >> elemenBaru;
}

void push(stack& s, char elemenBaru){
	if(s.top == maxstack-1){
		cout << "Tumpukan sudah penuh" << endl;
	}
	else{
		s.top = s.top + 1;
		s.info[s.top] = elemenBaru;
	}
}

void pop(stack& s, char& elemenHsl){
	elemenHsl = s.info[s.top];
	s.top = s.top - 1;
}

void traversal(stack s){
	for(int i=s.top; i>=0; i--){
		cout << s.info[i];
	}
}

main(){
	char baru, hasil;
	int banyakdata;
	
	cout << "Masukkan jumlah data : "; cin >> banyakdata;
	for (int i = 0; i < banyakdata; i++){
		insertStack(s,baru);
		push(s, baru);
	}

	cout << endl << endl;
	cout << "Hasil : ";
	for (int i=s.top; i>0; i--){
		
		pop(s,hasil);
		cout << hasil;
	}
	
}
