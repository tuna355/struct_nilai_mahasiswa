#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
		
struct Mahasiswa{
int nim;
string namaMhs;
float nilaiTugas;
float uts;
float uas;
float NA;
}mhs[4];
for(int i = 1; i<=3; i++){
	cout << endl;
	cout << "Data ke - " << i << endl;
	cout << "Masukkan Nim : ";
	cin >> mhs[i].nim;
	cout << "Masukkan Nama Mahasiswa : ";
	cin >> mhs[i].namaMhs;
	cout << "Masukkan Nilai Tugas : ";
	cin  >> mhs[i].nilaiTugas;
	cout << "Masukkan Nilai UTS : ";
	cin >> mhs[i].uts;
	cout << "Masukkan Nilai UAS : ";
	cin >> mhs[i].uas;
}
cout << endl;
cout << "Daftar Nilai Akhir Mahasiswa " << endl;
cout << "=========================================" << endl;
cout << "No  Nim  Nama Mhs  Tugas  Uts  Uas  Akhir" << endl;
cout << "=========================================" << endl;

for(int j = 1; j<=3; j++){
	mhs[j].NA = (mhs[j].nilaiTugas * 0.3) + (mhs[j].uts * 0.3) + (mhs[j].uas * 0.4);
 	cout << setiosflags(ios::left) << setw (4) << j;
 	cout << setiosflags(ios::left) << setw (5) << mhs[j].nim;
 	cout << setiosflags(ios::left) << setw (12) << mhs[j].namaMhs;
 	cout << setiosflags(ios::left) << setw (5) << mhs[j].nilaiTugas;
 	cout << setiosflags(ios::left) << setw (5) << mhs[j].uts;
 	cout << setiosflags(ios::left) << setw (5) << mhs[j].uas;
 	cout << setiosflags(ios::left) << setw (5) << mhs[j].NA;
 	cout << endl;
}

cout <<"==========================================";
return 0;
}
