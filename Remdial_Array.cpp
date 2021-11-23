//--------------------------------------------------
//DAFTAR NILAI MAHASISWA PRESIDENT UNIVERSITY
//--------------------------------------------------
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
float awal()
    {
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"                 DAFTAR NILAI MAHASISWA PRESIDENT UNIVERSITY"<<endl;
        cout<<"-----------------------------------------------------------------------------------"<<endl;
    }
float tampilan()
{
    cout<<"==========================================================================================="<<endl;
    cout<<"                                          \tDAFTAR NILAI"<<endl;
    cout<<"                              \tMAHASISWA PRESIDENT UNIVESERSITY"<<endl;
    cout<<"==========================================================================================="<<endl;
    cout<<"NO.  NAMA SISWA                \tNILAI                    \tGRADE LULUS\TIDAK"<<endl;
    cout<<"==========================================================================================="<<endl;
    cout<<"                     \t |TUGAS|  |UTS|  |UAS|            \t |RATA-RATA|"<<endl;
    cout<<"==========================================================================================="<<endl;
}
float terakhir()
{
    cout<<"==========================================================================================="<<endl;
}


int main(int argc, char** argv[])
{
    int i;
    int jum;
    char ulang;
    char nama_siswa[10][100];
    float nilai_tugas [10];
    float nilai_UTS [10];
    float nilai_UAS [10];
    float nilai_ratarata [10];
    do
{
    awal();
    cout<<"masukan jumlah siswa = ";
    cin>>jum;
    cout<<endl;
    terakhir();

    for(i=1;i<=jum;i++)
    {
        cout<<"==========================================================================================="<<endl;
        cout<<"siswa ke- "<<i<<endl;
        cout<<"Nama Siswa\t= ";cin>>nama_siswa[i];
        cout<<"Nilai Tugas\t= ";cin>>nilai_tugas[i];
        cout<<"Nilai UTS\t= ";cin>>nilai_UTS[i];
        cout<<"Nilai Tugas\t= ";cin>>nilai_UAS[i];
        nilai_ratarata [i]=(nilai_tugas[i]*0.3)+(nilai_UTS[i]*0.2)+(nilai_UAS[i]*0.5);
        cout<<endl;
    }
cout<<endl;
tampilan();

for(i=1;i<=jum;i++)
{
    cout<<setiosflags(ios::left)<<setw(5)<<i;
    cout<<setiosflags(ios::left)<<setw(20)<<nama_siswa[i];
    cout<<setiosflags(ios::left)<<setw(10)<<nilai_tugas[i];
    cout<<setiosflags(ios::left)<<setw(10)<<nilai_UTS[i];
    cout<<setiosflags(ios::left)<<setw(20)<<nilai_UAS[i];
    cout<<setiosflags(ios::left)<<setw(20)<<nilai_ratarata[i];

    if(nilai_ratarata[i]>=85)
    cout<<setprecision(4)<<" "<<"A";
    else if(nilai_ratarata[i]>=70)
        cout<<setprecision(4)<<" "<<"B";
    else if(nilai_ratarata[i]>=60)
        cout<<setprecision(4)<<" "<<"C";
    else if(nilai_ratarata[i]>=50)
        cout<<setprecision(4)<<" "<<"D";
    else if(nilai_ratarata[i]<=50)
        cout<<setprecision(4)<<" "<<"E";
    if(nilai_ratarata[i]>=60)
        cout<<setprecision(4)<<"\t"<<"LULUS";
    else if(nilai_ratarata[i]<=60)
        cout<<setprecision(4)<<"\t"<<"GAGAL";

    cout<<endl;

}
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"apakah anda ingin mengulang nya kembali (Y/T)?";
    cin>>ulang;
    system("cls");
}
    while((ulang=='Y')|(ulang=='y'));
        cout<<endl<<endl;
    return 0;
}
