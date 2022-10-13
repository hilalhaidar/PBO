#include<iostream>
using namespace std;

int main(){
	int pilih, umur;
	string nama;
	
	cout<<"Cek umur anda untuk mengikuti ujian SIM\n";
	cout<<"Masukkan nama anda : ";
	getline(cin, nama);
	cout<<"Masukkan umur anda : ";
	cin>>umur;
	
	if(umur >= 17){
		cout<<"Selamat anda dapat mengikuti ujian SIM\n";
	}
	else
	{
		cout<<"Maaf anda belum berusia 17 tahun\n";
	}
	
	int i = 0;
	while (i < 2){
		cout<<"Perulangan while"<<endl;
		i++;
	}
	cout<<endl;
	int j = 0;
    do {												
        cout << " Perulangan Do while" << endl;
    j++;
    }
    
    while (j < 2);
    char y[6]={'h', 'a', 'i', 'd', 'a', 'r'};
    cout << "Array 1D" << endl;
    for(int i=0; i<6; i++){		//perulangan For & array 1D						
        cout << "index ke-" << i << " = " << y[i] << endl;	
    }
    
    int x[3][2] = {{04,05}, {20,03}, {07,06}};
     cout << endl << endl << "Array 2D" << endl;		
    for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout << x[i][j] << "\t";
		}
		cout << endl;
	}
}
/* contoh
comment*/
// contoh comment
