#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  E-Kartu Tanda Mahasiswa  ##" << endl;
  cout << "_________________________________________" << endl;
  cout << endl;
 
  string Nama, NIU, Fakultas, Jurusan, Tempat_TanggalLahir, Alamat;
 
  cout << "Nama mahasiswa: ";
  getline(cin,Nama);
 
  cout << "NIU: ";
  getline(cin,NIU);
 
  cout << "Fakultas: ";
  getline(cin,Fakultas);
 
  cout << "Jurusan: ";
  getline(cin,Jurusan);
 
  cout << "Tempat Tanggal Lahir: ";
  getline(cin,Tempat_TanggalLahir);
 
  cout << "Alamat: ";
  getline(cin,Alamat);
 
  cout << endl;
 
 
  cout << "# Data E-Kartu Tanda Mahasiswa #"       << endl;
  cout << "=================="       << endl;
  cout << "Nama: "      << Nama      << endl;
  cout << "NIM: "       << NIU       << endl;
  cout << "Fakultas: "  << Fakultas  << endl;
  cout << "Jurusan: "   << Jurusan   << endl;
  cout << ":Tempat TanggalLahir " << Tempat_TanggalLahir << endl;
  cout << "Alamat: "    << Alamat    << endl;
 
  return 0;
}
