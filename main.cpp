#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string.h>


using namespace std;

void header(void);
void headsoal();
void Loading();
void exit();
void Login();
void Register();
void univ();
void poin();
void garis();
void garis2();
void soal1();
void soal2();

int d;
int total;
int lr;

char user[30];
char pw[30];
char username[30];
char password[30];
char s11,s12,s13,s14,s15;

main()
{
    header();
    Loading();
    LoR:
    system("cls");
    cout<<"*         *         *     ^=========================^     *         *         *"<< endl;
    cout<<" *       * *       * *    |  --- MENU APLIKASI ---  |    * *       * *       * "<< endl;
    cout<<"  *     *   *     *   *   v=========================v   *   *     *   *     *  "<< endl;
    cout<<"   *   *     *   *     *  | 1. Masuk Akun           |  *     *   *     *   *   "<< endl;
    cout<<"    * *       * *       * | 2. Daftar Akun          | *       * *       * *    "<< endl;
    cout<<"     *         *         *| 3. Keluar               |*         *         *     "<< endl;
    cout<<setw(53)<<" ------------------------- "<< endl;
    garis();
    cout<<setw(49)<<"Pilih Menu [1/2/3]= ";cin>>lr;
    cout<<endl;garis2();
    if(lr==1)
    {
        Login();
        if(strstr(user,username))
        {
           goto pass;
        }
            else
            {
                cout<<endl<<"\t\t                 Username SALAH!           ";
                cout<<endl<<"\t\t    ---------------------------------------";
                cout<<endl<<"\t\t            Anda belum membuat Akun        ";
                cout<<endl;garis();
                getch();
                goto LoR;
            }
        pass:
        if(strstr(pw,password))
        {
            garis2();
            cout<<"\t\t\t      sedang masuk akun";
            for(d=1;d<=3;d++)
            {
                cout<<".";
                Sleep(500);
            }
            goto soal;
        }
            else
            {
                cout<<endl<<"\t                Password SALAH!            ";
                cout<<endl<<"\t    ---------------------------------------";
                cout<<endl<<"\t            Anda belum membuat Akun        ";
                cout<<endl;garis();
                getch();
                goto LoR;
            }
    }
        else if(lr==2)
        {
            Register();
            cout<<"\t\t\t     sedang memasukan data";
            for(d=1;d<=3;d++)
            {
                cout<<".";
                Sleep(500);
            }
            goto LoR;
        }
            else if(lr==3)
            {
                exit();
                return 0;
            }
                else
                {
                    cout<<endl<<"\t\t Salah Input Kode [Y/N] !!";
                    getch();
                    goto LoR;
                }
    soal:
    system("cls");
    garis();
    headsoal();
    garis();
    soal1();
    poin();
    if(total>=60)
    {
        univ();
        exit();
        return 0;
    }
        else
        {
            cout<<setw(51)<<"|   ~MENU KESEMPATAN~   |"<<endl;
            cout<<setw(51)<<"+=======================+"<<endl;
            cout<<setw(51)<<"+  1.Kesempatan ke-2    +"<<endl;
            cout<<setw(51)<<"+  2.Udahan deh gakuat  +"<<endl;
            garis();
            cout<<setw(53)<<"Jadi kamu pilih nomor berapa? ";cin>>lr;
            if(lr==1)
            {
                cout<<endl<<setw(47)<<"Berdoa dulu aja ya";
                for(d=1;d<=3;d++)
                {
                    cout<<".";
                    Sleep(500);
                }
                system("cls");
                garis();
                headsoal();
                garis();
                soal2();
                goto soal2;
            }
                else if(lr==2)
                {
                    exit();
                    return 0;
                }
        }
    soal2:
    poin();
    if(total>=60)
    {
        univ();
        exit();
        return 0;
    }
    else
    {
        cout<<setw(49)<<"MOHON MAAF ANDA GAGAL";
        getch();
        exit();
        return 0;
    }
}

void garis()
{
    cout<<"================================================================================"<<endl;
}
void garis2()
{
    cout<<"--------------------------------------------------------------------------------"<<endl;
}

void Login()
{
    awal:
    cout<<"Masukan Nama Pengguna = ";cin>>username;
    cout<<"Masukan Kata Sandi    = ";cin>>password;
}

void Register()
{

    char nm[30];
    char eml[30];
    cout<<"Masukan Nama Panggilan = ";cin>>nm;
    cout<<"Masukan Email Aktif    = ";cin>>eml;
    cout<<"Masukan Nama Pengguna  = ";cin>>user;
    cout<<"Masukan Kata Sandi     = ";cin>>pw;
    garis();
    getch();
}

void soal1()
{
    struct soal
    {
        string pertanyaan,pilihan;
        char jawaban,kunci;
    };

    soal s[10];
    s[0].pertanyaan ="1.Pencerminan titik P(a,2)terhadap garis y= -3 dan dilanjutkan dengan pergeseran sejauh 5 satuan ke kanan dan b satuan ke atas, mengakibatkan bayangannya menjadi P bukan c(1,-7). total a + b adalah .... ";
    s[0].pilihan=" a.-5\n b.-3\n c.-1\n d. 3\n";
    s[0].kunci='b';


    s[1].pertanyaan ="2.Jika -2, a + 3, a –1 membentuk barisan geometri, maka jumlah 11 suku pertama yang mungkin adalah ....";
    s[1].pilihan=" a.-2\n b.-3\n c.-1\n d.2\n";
    s[1].kunci='a';


    s[2].pertanyaan ="3.Ari dan Ira merupakan anggota dari suatu kelompok yang terdiri dari 9 orang. Banyaknya cara membuat barisan, dengan syarat Ari dan Ira tidak berdampingan, adalah .... ";
    s[2].pilihan=" a.7x8!\n b.6x8!\n c.5x8!\n d.7x7!\n";
    s[2].kunci='a';


    s[3].pertanyaan ="4.Sisa pembagian p(x) = x3 + ax2 + 3bx + 21 oleh x2 + 9 adalah b. Jika p(x) dibagi x + 1 bersisa 4b + 1, maka a + b = .... ";
    s[3].pilihan=" a.5\n b.4\n c.3\n d.2\n";
    s[3].kunci='a';

    s[4].pertanyaan ="5.Jika garis singgung kurva y = 9 – x2 di titik P(a, b) dengan b > 0 memotong sumbu x di titik Q(-5, 0), maka ab adalah...";
    s[4].pilihan=" a.-10\n b.-8\n c.0\n d.8\n";
    s[4].kunci='b';

    s[5].pertanyaan ="6.Diketahui (an) dan (bn) adalah dua barisan aritmetika dengan a1 = 5, a2 = 8, b1 = 3, dan b2 = 7. Jika A = {a1, a2, ... , a100} dan B = {b1, b2, ..., b100}, maka banyaknya anggota A C B adalah ....";
    s[5].pilihan=" a.22\n b.23\n c.24\n d.25\n";
    s[5].kunci='d';

    s[6].pertanyaan ="7.Himpunan semua bil.real x pada selang (T.211) yang memenuhi scx(1cotx) <0 berbentuk (a,b).total a+b adalah...";
    s[6].pilihan=" a.137\n b.138\n c.140\n d.141\n";
    s[6].kunci='a';

    s[7].pertanyaan ="8.Diketahui f(x)= 9 dan g(x)= 3+2x+1. Jika (a, b) adalah interval dengan grafik y=f(x) berada di bawah grafik y= g(x), maka total a + 2b adalah ....?";
    s[7].pilihan=" a.4\n b.5\n c.6\n d.7\n";
    s[7].kunci='d';

    s[8].pertanyaan ="9.Seorang pemain biola menarik senar dengan gaya 4 N sehingga senar bertambah panjang 4 mm. Besar usaha yang dikerjakan oleh pemain biola tersebut adalah ... ";
    s[8].pilihan=" a.6 mJ\n b.8 mJ\n c.10 mJ\n d.12 mJ\n";
    s[8].kunci='b';

    s[9].pertanyaan ="10.Persentase massa atom H(A=1) dalam suatu senyawa organik adalah 13%. Jika tetapan Avogadro = 6 x 10. Jumlah atom H yang terdapat dalam 2,3 senyawa tersebut adalah...";
    s[9].pilihan=" a.1,2x10\n b.1,8x10\n c.9,0x10\n d.3,0x10\n";
    s[9].kunci='b';


    for(int i=0;i<10;i++)
    {
        cout<<s[i].pertanyaan<<endl;
        cout<<s[i].pilihan<<endl;
        cout<<"Jawab    : ";cin>>s[i].jawaban;
        if(s[i].jawaban==s[i].kunci)
        {
            cout<<endl<<endl;
            s[i].kunci=10;
            cout<<endl;
        }
            else
            {
                cout<<endl<<endl;
                s[i].kunci=0;
                cout<<endl;
            }
    }
    total=s[0].kunci+s[1].kunci+s[2].kunci+s[3].kunci+s[4].kunci+s[5].kunci+s[6].kunci+s[7].kunci+s[8].kunci+s[9].kunci;
}

void soal2()
{
    struct soal
    {
    string pertanyaan,pilihan;
    char jawaban,kunci;

    };

    soal s[10];
    s[0].pertanyaan ="1.Dietilamina (C Hs)>>NH) merupakan basa lanah dengan Ks = 9 x 104.Suatu larutan dibuat dengan mencarpukan 90 mL larutan dietilamina 0,01 M dan 10 mL larutan HCl 0.09 M. Lantan yang dihasilkan memiliki pH.... ";
    s[0].pilihan=" a.6,0 \n b.6,5\n c.8,0\n d.8,5";
    s[0].kunci='b';

    s[1].pertanyaan ="2.Pengelompokkan bakteri berdasarkan kelompok bakteri gram-positif dan gram-negatif didasarkan pada .... ";
    s[1].pilihan=" a.permeabilitas membran sel \n b.komposisi kimiawi sitoplasma\n c.keberadaan lapisan peptidoglikan\n d.komposisi senyawa penyusun dinding sel ";
    s[1].kunci='d';

    s[2].pertanyaan ="3.Beberapa tumbuhan memiliki total ekonomi yang tinggi karena memiliki kayu yang harum. Salah satu tumbuhan tersebut adalah cendana. Cendana berbau harum karena .... ";
    s[2].pilihan=" a.batangnya ditumbuhi lumut kerak sehingga menghasilkan senyawa berbau harum \n b.batangnya dihuni oleh serangga yang menghasilkan feromon berbau harum\n c. batangnya mengandung minyak atsiri yang berbau harum\n d.mempunyai jamur yang menghasilkan senyawa berbau harum ";
    s[2].kunci='c';

    s[3].pertanyaan ="4.Sklera pada bagian anterior mata akan tersambung dengan ...";
    s[3].pilihan=" a.bintik buta \n b.kornea\n c.lensa\n d.lensa";
    s[3].kunci='b';

    s[4].pertanyaan ="5.Kekurangan unsur kimia berikut dapat menyebabkan tanaman mengalami klorosis yang ditandai dengan menguningnya daun, yaitu .... ";
    s[4].pilihan=" a.magnesium \n b.kalsium\n c.kalium\n d.natrium";
    s[4].kunci='a';

    s[5].pertanyaan ="6.Pindah silang pada meiosis yang ditandai dengan terbentuknya kiasmata terjadi pada tahapan ... ";
    s[5].pilihan=" a.pakiten\n b.diploten\n c.zigoten\n d.mangan";
    s[5].kunci='b';

    s[6].pertanyaan ="7.Dua buah kawat konduktor yang sejajar dan berjarak L = 1 m dipasang membentk sudut = 30(derajat) terhadap bidang horizontal. Ujung bawah kedua kawat terhubung dengan sebuah resistor R = 3 . Sebuah batang konduktor dengan masa m bergeser turun di sepanjang rel, tanpa kehilangan kontak dengan rel sehingga rel dan batang membentuk suatu rangkaian tertutup. Pada daerah tersebut terdapat medan magnetik seragam yang bersarnya B = 2 T dan berarah horizontal. Jika batang turun dengan laju konstanta v = 3 m/s, maka batang m adalah ....  ";
    s[6].pilihan=" a.0,2 kg \n b.0,4 kg\n c.0,6 kg \n d. 0,8 kg";
    s[6].kunci='a';

    s[7].pertanyaan ="8.Cis-platin (M = 300), senyawa antikanker, disintesis dengan mereaksikan 1,7 g annonia (M. = 17) dengan 8.3 g K PC14 (M = 415) menurut reaksi berikut. K PtCl(s) + 2NH:(g) -> Pt(NH3),C1:(s) + 2KCI(3) Jika reaksi berlangsung sempurna, massa pereaksi yang tersisa adalah";
    s[7].pilihan=" a. 0,51 g \n b.1,02 g\n c.4,08\n d.8,16";
    s[7].kunci='b';

    s[8].pertanyaan ="9.Reaksi antar gas metana dan gas klor berlangsung serpuna menurut reaksi berikut. 2CH (9) + 3Cl(g) -> 2CHCl:(g) + 3H (2) Jika volume gas H, yang dihasilkan dari reaksi tersebut adalah 300 mL. Volume total gas-gas hasil reaksi adalah";
    s[8].pilihan=" a.300 ml \n b.400mL\n c.500 ml\n d.600 mL";
    s[8].kunci='c';

    s[9].pertanyaan ="10.Lantan A dibuat dengan melarutkan 4,16 g Ba Cl. (M. = 208) ke dalam 2 kg air. Barium klorida terdisosia si sempuna dalam air. Lantan B dibuat dengan melantkan 15 g zat organik nonelektrolit ke dalam 1 kg air. Pada tekanan yang sama, AT, larutan B = 2 AT larutan A. Massa molekul relatif zat organik tersebut adalah...";
    s[9].pilihan=" a.300 \n b.450\n c.700\n d.250";
    s[9].kunci='d';


    for(int i=0;i<10;i++)
    {
        cout<<s[i].pertanyaan<<endl;
        cout<<s[i].pilihan<<endl;
        cout<<"Jawab    : ";cin>>s[i].jawaban;
        if(s[i].jawaban==s[i].kunci)
        {
            cout<<endl<<endl;
            s[i].kunci=10;
            cout<<endl;
        }
            else
            {
                cout<<endl<<endl;
                s[i].kunci=0;
                cout<<endl;
            }
    }
    total=s[0].kunci+s[1].kunci+s[2].kunci+s[3].kunci+s[4].kunci+s[5].kunci+s[6].kunci+s[7].kunci+s[8].kunci+s[9].kunci;
}

void header(void)
{
 cout << endl << endl << endl << endl << endl << endl << endl;
    garis();
 cout << setw(57) << "APLIKASI REKOMENDASI UNIVERSITAS\n\n";
 cout << setw(43) << "\t\t\t      Ragil Arya Dewanto\n\n\t\t\t      Andika Yudha Utama\n\n";
 garis();
 cout << endl;
 cout << setw(56) << "Tekan Enter, Untuk Melanjutkan...";
 getch();
}

void headsoal()
{
    cout<<setw(53)<<"#####  #####  #####  #    "<<endl;
    cout<<setw(53)<<"#      #   #  #   #  #    "<<endl;
    cout<<setw(53)<<"#####  #   #  #####  #    "<<endl;
    cout<<setw(53)<<"    #  #   #  #   #  #    "<<endl;
    cout<<setw(53)<<"#####  #####  #   #  #####"<<endl;
    cout<<endl;
}

void Loading()
{
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<setw(50)<<"Sedang Menyiapkan Menu";
    cout<<endl<<endl;
    for(d=1;d<=80;d++)
    {
        cout<<"#";
        Sleep(50);
    }
}

void exit()
{
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<setw(60)<<"Terima Kasih Telah Menggunakan Aplikasi Kami";
    cout<<endl<<endl;
    for(d=1;d<=80;++d)
    {
        cout<<"#";
        Sleep(20);
    }
}

void univ()
{
    if(total>=90){
        cout << "+-------------------------------------------------------+" << endl;
        cout << "|  **   KAMPUS REKOMENDASI YANG COCOK DENGAN ANDA  **   |" << endl;
        cout << "+-------------------------------------------------------+" << endl;
        cout << "| 1. UNIVERSITAS INDONESIA                              |" << endl;
        cout << "| 2. UNIVERSITAS PADJAJARAN                             |" << endl;
        cout << "| 3. UNIVERSITAS GAJAH MADA                             |" << endl;
        cout << "| 4. UNIVERSITAS SOEDIRMAN                              |" << endl;
        cout << "| 5. UNIVERSITAS NEGERI JAKARTA                         |" << endl;
        cout << "| 6. UNIVERSITAS NEGERI YOGYAKARTA                      |" << endl;
        cout << "| 7. UNIVERSITAS PERTAHANAN INDONESIA                   |" << endl;
        cout << "| 8. UNIVERSITAS BRAWIJAYA                              |" << endl;
        cout << "| 9. UNIVERSITAS ANDALAS                                |" << endl;
        cout << "| 10.UNIVERSITAS VETERAN JAKARTA                        |" << endl;
        cout << "| 11.UNIVERSITAS SINGAPERBANGSA KARAWANG                |" << endl;
        cout << "| 12.UIN SOLO                                           |" << endl;
        cout << "| 13.UIN JAKARTA                                        |" << endl;
        cout << "| 14.UIN YOGYAKARTA                                     |" << endl;
        cout << "| 15.SEKOLAH TINGGI ILMU PELAYARAN                      |" << endl;
        cout << "| 16.SEKOLAH TINGGI ILMU PENERBANGAN                    |" << endl;
        cout << "| 17.SEKOLAH TINGGI AKUTANSI NEGARA                     |" << endl;
        cout << "| 18.SEKOLAH TINGGI PENERBANGAN INDONESIA               |" << endl;
        cout << "| 19.SEKOLAH TINGGI TRANSPORTASI DARAT                  |" << endl;
        cout << "| 20.SEKOLAH TINGGI HUKUM NEGARA                        |" << endl;
        cout << "+-------------------------------------------------------+" << endl << endl;

    }
    else if(total>=80)
    {
        cout << "+-------------------------------------------------------+" << endl;
        cout << "|  **   KAMPUS REKOMENDASI YANG COCOK DENGAN ANDA  **   |" << endl;
        cout << "+-------------------------------------------------------+" << endl;
        cout << "| 1. UNIVERSITAS NEGERI JAKARTA                         |" << endl;
        cout << "| 2. UNIVERSITAS NEGERI YOGYAKARTA                      |" << endl;
        cout << "| 3. UNIVERSITAS NEGERI TERBUKA                         |" << endl;
        cout << "| 4. UNIVERSITAS BRAWIJAYA                              |" << endl;
        cout << "| 5. UNIVERSITAS ANDALAS                                |" << endl;
        cout << "| 6. UNIVERSITAS VETERAN JAKARTA                        |" << endl;
        cout << "| 7. UNIVERSITAS SINGAPERBANGSA KARAWANG                |" << endl;
        cout << "| 8. UIN SOLO                                           |" << endl;
        cout << "| 9. UIN YOGYAKARTA                                     |" << endl;
        cout << "| 10.UIN JAKARTA                                        |" << endl;
        cout << "| 11.POLITEKNIK NEGERI JAKARTA                          |" << endl;
        cout << "| 12.POLITEKNIK NEGERI MEDIA KREATIF JAKARTA            |" << endl;
        cout << "| 13.POLITEKNIK KESEHATAN JAKARTA                       |" << endl;
        cout << "| 14.POLITEKNIK MANUFAKTUR NEGERI BANDUNG               |" << endl;
        cout << "| 15.POLITEKNIK NEGERI                                  |" << endl;
        cout << "+-------------------------------------------------------+" << endl << endl;
    }
    else if(total>=70)
    {
        cout << "+-------------------------------------------------------+" << endl;
        cout << "|  **   KAMPUS REKOMENDASI YANG COCOK DENGAN ANDA  **   |" << endl;
        cout << "+-------------------------------------------------------+" << endl;
        cout << "| 1. UNIVERSITAS VETERAN JAKARTA                        |" << endl;
        cout << "| 2. UNIVERSITAS SINGAPERBANGSA KARAWANG                |" << endl;
        cout << "| 3. UNIVERSITAS NEGERI YOGYAKARTA                      |" << endl;
        cout << "| 4. UNIVERSITAS ANDALAS                                |" << endl;
        cout << "| 5. UIN SOLO                                           |" << endl;
        cout << "| 6. UIN YOGYAKARTA                                     |" << endl;
        cout << "| 7. UIN JAKARTA                                        |" << endl;
        cout << "| 8. POLITEKNIK NEGERI JAKARTA                          |" << endl;
        cout << "| 9. POLITEKNIK NEGERI MEDIA KREATIF JAKARTA            |" << endl;
        cout << "| 10.POLITEKNIK KESEHATAN JAKARTA                       |" << endl;
        cout << "| 14.POLITEKNIK MANUFAKTUR NEGERI BANDUNG               |" << endl;
        cout << "| 15.POLITEKNIK NEGERI                                  |" << endl;
        cout << "+-------------------------------------------------------+" << endl << endl;
    }
    else if(total>=60)
    {
        cout << "+-------------------------------------------------------+" << endl;
        cout << "|  **   KAMPUS REKOMENDASI YANG COCOK DENGAN ANDA  **   |" << endl;
        cout << "+-------------------------------------------------------+" << endl;
        cout << "| 1. UNIVERSITAS VETERAN JAKARTA                        |" << endl;
        cout << "| 2. UNIVERSITAS SINGAPERBANGSA KARAWANG                |" << endl;
        cout << "| 3. UNIVERSITAS NEGERI YOGYAKARTA                      |" << endl;
        cout << "| 4. UNIVERSITAS ANDALAS                                |" << endl;
        cout << "| 5. UIN SOLO                                           |" << endl;
        cout << "+-------------------------------------------------------+" << endl << endl;
    }
    else{
        cout<<"ANDA GAGAL";
    }
    getch();
}

void poin()
{
    system("cls");
    cout<<setw(47)<<"+===============+"<<endl;
    cout<<setw(47)<<"+TOTAL POIN ANDA+"<<endl;
    cout<<setw(37)<<"+      "<<total<<"       +"<<endl;
    cout<<"================================================================================";
    getch();
}
