#include <iostream>
using namespace std;

int main(){
	float kuis, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	
	cout<<"Program Menghitung Nilai Akhir"<<endl;
	cout<<"------------------------------"<<endl;

	cout<<"Masukan Nilai Kuis : ";
	cin>>kuis;
	
	cout<<"Masukan Nilai Tugas : ";
	cin>>tugas;
	
	cout<<"Masukan Nilai UTS : ";
	cin>>uts;
	
	cout<<"Masukan Nilai UAS : ";
	cin>>uas;
	
	//Bobot Kuis 20%, Tugas 30%, UTS 25%, UAS 25%
	nilai_akhir = ((kuis*0.2)+(tugas*0.3)+(uts*0.25)+(uas*0.25));
	
	if (nilai_akhir>=80){
		nilai_huruf='A';
	}else if (nilai_akhir>=70){
		nilai_huruf='B';
	}else if(nilai_akhir>=60){
		nilai_huruf='C';
	}else if (nilai_akhir>=50){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	}
	
	cout<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
	cout<<"Nilai Huruf : "<<nilai_huruf<<endl;
}