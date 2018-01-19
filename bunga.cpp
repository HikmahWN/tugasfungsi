#include <iostream>
#include <string>
using namespace std;

class bunga{
	public:
		void layu(string warna);
		void mekar(int ukuran);
		void muda(string segar);
		
		string jenisbunga;
		int jumlahkelopak;
};

int main(){
	bunga berduri,bergerombol,berbiji;
	
	//warna
	berduri.jenisbunga = "Bunga Mawar";
	bergerombol.jenisbunga = "Bunga Kertas";
	berbiji.jenisbunga = "Bunga Matahari";

	//ukuran
	berduri.jumlahkelopak = 20;
	bergerombol.jumlahkelopak = 5;
	berbiji.jumlahkelopak = 25;	

	//layu warna
	cout << (berduri.jenisbunga);
	berduri.muda("Merah,Merah Muda dan Putih") ;
	berduri.layu("kekuningan");
	cout << "jumlah kelopak : " <<berduri.jumlahkelopak<<endl<<endl;
	
	cout << (bergerombol.jenisbunga);
	bergerombol.muda("Merah Muda dan Putih") ;
	bergerombol.layu("kecoklatan");
	cout << "jumlah kelopak : " <<bergerombol.jumlahkelopak<<endl<<endl;
	
	cout << (berbiji.jenisbunga);
	berbiji.muda("Kuning") ;
	berbiji.layu("kuning kecoklatan");
	cout << "jumlah kelopak : " <<berbiji.jumlahkelopak<<endl<<endl;
	
	
		
}


//warna layu
void bunga::layu(string warna){
	cout << "Warnanya jika Layu adalah "<<warna<< " !!"<<endl;	
}
