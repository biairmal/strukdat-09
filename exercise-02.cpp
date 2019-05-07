/*
Nama	: Bandana Irmal Abdillah
NPM		: 140810180025
Tanggal	: 7 Mei 2019
Deskripsi: exercise-02 strukdat-09
*/

#include <iostream>
using namespace std;

struct stack{
	char info;
	stack* next;
};

typedef stack* pointer;
typedef pointer list;

void createStack(list& top){
	top = 0;
}

void insertStack(pointer& pBaru){
	pBaru = new stack;
	cout << "Masukkan huruf : ";
	cin >> pBaru->info;
	pBaru->next = 0;
}

void push(list& top, pointer pBaru){
	if (top == 0){
		top = pBaru;
	}
	else{
		pBaru->next = top;
		top = pBaru;
	}
}

void pop(list& top, pointer& pHapus){
	
	if(top == 0){
		
	}

	else{
		pHapus = top;
		top = top->next;
		pHapus->next = 0;
	}
}

void traversal(list top){
	pointer pBantu;
	pBantu = top;
	
	while(pBantu != 0){
		cout << pBantu->info;
		pBantu = pBantu->next;
	}
}

main(){
	list top;
	pointer baru, hapus;
	char hasil;
	int banyakdata;

	cout << "Banyak data :"; cin >> banyakdata;
	
	for (int i = 0; i < banyakdata; i++){
		insertStack(baru);
		push(top, baru);
	}	
	
	cout << "Hasil : ";
	for(int i=0; i<banyakdata; i++){
		
		pop(top, hapus);
		cout << hapus->info;
	}
	
}
