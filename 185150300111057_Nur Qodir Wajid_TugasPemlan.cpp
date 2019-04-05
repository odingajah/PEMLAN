//Nama : Nur Qodir wajid Muharom 
//NIM  : 185150300111057
//Kelas: Tekkom D

#include <iostream>

using namespace std;

class tumbuhan1{
	public:
		void buah(string tumbuhan){
			cout<<"1. "<<tumbuhan<<" : ukurannya besar, berbentuk bulat berwarna hijau, dan buah dagingnya berwarna merah"<<endl;
		}
		void kandunganVitamin(string tumbuhan){
			cout<<"1. "<<tumbuhan<<" mengandung vitamin A, B6, C, Likopen, Antioksidan, dan Asam Amino"<<endl;
		}
};

class tumbuhan2{
	public:
		void sayuran(string tumbuhan){
			cout<<"2. "<<tumbuhan<<"  : memiliki cabang pohon dengan batang yang tebal, memiliki bunga berwarna putih dan sebagian besar dikelilingi dedaunan"<<endl;
		}
		void kandunganVitamin(string tumbuhan){
			cout<<"2. "<<tumbuhan<<" mengandung vitamin B, C, kalium, dan  antioksidan"<<endl;
		}
};

class tumbuhan3 : public tumbuhan1, public tumbuhan2{
	public:
		void umbiUmbian(string tumbuhan){
			cout<<"3. "<<tumbuhan<<" : tumbuh dengan cara menjalar, akarnya berupa umbi-umbian yang dapat diolah menjadi makanan"<<endl;
		}
		void kandunganVitamin(string tumbuhan){
			cout<<"3. "<<tumbuhan<<" mengandung vitamin B3, B6, C, Folat, Kalium, dan Magnesium"<<endl;
		}
};

int main(){
	cout<<"Multiple Inheritance"<<endl;
	cout<<endl;
	cout<<"Ciri-ciri tumbuhan :"<<endl;
	tumbuhan3 tbh3;
	tbh3.buah("Semangka");
	tbh3.sayuran("Brokoli");
	tbh3.umbiUmbian("Ubi Ungu");
	cout<<"\nOverriding"<<endl;
	cout<<endl;
	cout<<"Kandungan vitamin :"<<endl;
	tumbuhan1 tbh1;
	tumbuhan2 tbh2;
	tbh1.kandunganVitamin("Semangka");
	tbh2.kandunganVitamin("Brokoli");
	tbh3.kandunganVitamin("Ubi Ungu");
	
	
}


