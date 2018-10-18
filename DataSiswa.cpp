#include<iostream>
#include<stdio.h>
#include<cstdlib>
#define max 20
#include<conio.h>
#include<string>

using namespace std;
 struct tumpuk{
 	int atas;
 	string nama[max];
 	int nisn[max];
 	float nem[max];
 	string assekol[max];

 }t;
  void a(){
  	t.atas = -1;
  }
  int ksg(){
  	if(t.atas==-1)
  		return 1;
  	else
  		return 0;
  }
  int full(){
  	if(t.atas == max - 1)
  		return 1;
  	else 
  		return 0;
  }
  void input(int nisn, float nem, string nama, string assekol){
  	if (ksg()==1){
  			t.atas++;
  			t.nama[t.atas]=nama;
  			t.nisn[t.atas]=nisn;
  			t.nem[t.atas]=nem;
  			t.assekol[t.atas]=assekol;
  			cout<<"Data "<<t.nama[t.atas]<<" Sudah Terdaftar\n";
  			

  		}
  		else if (full()==0){
  			t.atas++;
  			t.nama[t.atas]=nama;
  			t.nisn[t.atas]=nisn;
  			t.nem[t.atas]=nem;
  			t.assekol[t.atas]=assekol;
  			
  			cout<<"Data "<<t.nama[t.atas]<<" Sudah Terdaftar\n";
  			



  		}
  		else 
  			cout<<"Kuota Pendaftaran Penuh!!";
  		

  }
  

  void hapus(){
  	if (ksg()==0){
  		cout<<"data terhapus";
  		t.atas--;
  	}
  	else 
  		cout<<"Data Kosong";
  }
  void tmpl(){
  	if(ksg()==0){
  		for(int i=t.atas;i>=0;i--){
  			cout<<"Data ke - "<<i<<" 	: \n";
  			cout<<"===============================================\n";
  			cout<<"\tNama 			: "<<t.nama[i]<<endl;
  			cout<<"\tNISN 			: "<<t.nisn[i]<<endl;
  			cout<<"\tNEM 			: "<<t.nem[i]<<endl;
  			cout<<"\tAsal sekolah	\t: "<<t.assekol[i]<<endl;
  			cout<<"===============================================";
  		}
  	}
  	else
  		cout<<"Data kosong";
  }



  	void sorting(){
  		int i,j,temp;
  		string tempe;
  		string temmmpe;
  		float temmpe;
  		for(i=0;i<t.atas;++i){
  			for(j=0;j<(t.atas-i);++j)
  				if(t.nem[j]>t.nem[j+1])
  				{
  					
					temmpe=t.nem[j];
  					t.nem[j]=t.nem[j+1];
  					t.nem[j+1]=temmpe;
  					
  					temp=t.nisn[j];
  					t.nisn[j]=t.nisn[j+1];
  					t.nisn[j+1]=temp;

  					tempe=t.nama[j];
  					t.nama[j]=t.nama[j+1];
  					t.nama[j+1]=tempe;

  					temmmpe=t.assekol[j];
  					t.assekol[j]=t.assekol[j+1];
  					t.assekol[j+1]=temmmpe;


  					
  				}
  		}
  		cout<<"Data setelah di urutkan = "<<endl;
  		tmpl();
  	}


  	void search(){
  		int cari_nisn, pil;
  		double cari_nem;
  		string carinama;
  		cout<<"[1]Nama [2]Nisn\n";
  		cout<<"plih data yang di cari : ";
		cin>>pil;
	if(pil==1){
  		cout<<"masukan nama yang di cari : ";
  		fflush(stdin);
  		getline(cin, carinama);
  		for(int i = 0;i < t.atas +1; i++){
  			if(t.nama[i] == carinama){
  				cout<<"===============================================";
  				cout<<"Data terletak pada:  \n" << i<< endl;
  				cout<<"\tNama 		: "<<t.nama[i]<<endl;
  				cout<<"\tNISN 		: "<<t.nisn[i]<<endl;
  				cout<<"\tNEM 		: "<<t.nem[i]<<endl;
  				cout<<"\tAsal sekolah	: "<<t.assekol[i]<<endl;
  				cout<<"===============================================";
  				break;
  			}
  			else 
  				cout<<"Data tidak ditemukan";
  		}

  	}
  	else if(pil==2){
  		cout<<"masukan nisn yang di cari : ";
  		cin>>cari_nisn;
  		for(int i = 0;i < t.atas +1; i++){
  			if(t.nisn[i]==cari_nisn){
  				cout<<"===============================================";
  				cout<<"Data terletak pada:  \n" << i<< endl;
  				cout<<"\tNama 		: "<<t.nama[i]<<endl;
  				cout<<"\tNISN 		: "<<t.nisn[i]<<endl;
  				cout<<"\tNEM 		: "<<t.nem[i]<<endl;
  				cout<<"\tAsal sekolah	: "<<t.assekol[i]<<endl;
  				cout<<"===============================================";
  				break;
  			}
  			else 
  				cout<<"Data tidak ditemukan";
  		}

}
  		getch();
  		cout<<endl;
  		cout<<endl;
  		system("pause");
  		system("cls");

  	}

  	void bersih(){
  		t.atas =-1;
  		cout<<"Data kosong";
  	}

  	int main(){

  		int pil,n;
  		int nisnC[max];
  		float nemC[max];
  		string namaC[max];
  		string assekolC[max];
  		a();
  				cout<<"\t===========================\n";
  		  		cout<<"\t|Data   SMA N MANTAB|\n";
  		  		cout<<"\t| Tahuan ajaran 2018/2019 |\n";
  		  		cout<<"\t==========================\n";
  		do{	cout<<" \t\tMenu \n\n";
  			cout<<"1.Input\n2.hapus\n3.Tampil\n4.sorting";
  			cout<<"\n5.sercing\n6.bersih\n+=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=+\nMasukan pilihan anda:";
  			
  			cin>>pil;

  			switch(pil){
  			case 1:
  			cout<<"Masukan data : ";cin>>n;
  			for(int i=1;i<n;i++){

  				cout<<"Masukan Nem 			:";
  				cin>>nemC[i];
  				cout<<"masukan Nama			:";
  				fflush(stdin);
  				getline(cin, namaC[i]);
  				cout<<"masukan NISN 			:";
  				fflush(stdin);
  				cin>>nisnC[i];
  				cout<<"masukan asal sekolah 		:";
  				fflush(stdin);
				getline(cin, assekolC[i]);
  
  				
  				if(nemC[i] >= 20){
  				input(nisnC[i], nemC[i], namaC[i], assekolC[i]);
  				}else{
  					cout<<"Mohon maaf nilai anda tidak cukup !!!\n";
  				}
  				
  			}
  			break;
  			case 2:hapus();
  			break;
  			case 3:tmpl();
  			break;
  			
  			case 4:sorting();
  			break;
  			case 5:search();
  			break;
  			case 6:bersih();
  			break;
  			case 7:cout<<"teriakasih";
  		}
  		getch();
  		cout<<endl;
  		cout<<endl;
  		system("pause");
  		system("cls");
  	}
  	while (pil!=7);
}
