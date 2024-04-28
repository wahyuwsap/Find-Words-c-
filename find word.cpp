#include <iostream>
#include <cstring>
using namespace std;


// ini dapat referensi dari buku programing halaman 215 bagian pointer
void kapital(char* str) {  						// ini deklarasi untuk fungsi kapital dengan 1 parameter yaitu pointer ke karakter (char* str)
    for (int i = 0; str[i] != '\0'; i++) {		// loop berjalan selama string tidak sama dengan '\0' atau null
        str[i] = toupper(str[i]); 				// fungsi toupper untuk mengubah huruf kecil menjadi huruf besar dan disimpan ke str[i]
    }
}


// referensi dari buku programming with c++ halaman 192 array dua dimensi
char matrix[24][24] = {				//ini untuk menyimpan data matrks dengan string dengan 24 baris dan 24 kolom
    "AAFLKHPFSSUFICICLESGNNH",		//ini bagian data matriksnya
    "SFVREOMRWLRTTSXOQQNAOAO",
    "QEIAIFXAEIRFVFYSXIMINJI",
    "WSTRLGOCAPBIAFIWIWTUACM",
    "FEYAEAISTPCRLUJKOAKCERS",
    "RVDAKPNDEEHDEMSNCKKFOAH",
    "MRNEDSLCRRIWNRSAAFITMMI",
    "YAAECIEAHYMOTAVHRSSTISB",
    "RJSEWELCCENNIETOHWSGLSE",
    "ATANYYMOIEESNESIOIRELTR",
    "UTENEWEBHMYBETNNRAIEBEN",
    "RCLKUTEAEQJLSGSHTGDSKOA",
    "BHOICATNRRSDDECEHOOLGIT",
    "ENSLUARIRSETALOCOHCTOHE",
    "FZFUDQJYMADOYIWYGLOVESU",
    "TEKALFWONSNAEBMIEJTZNTG",
    "ESWPOSJXEUTUYOZUWAKEZHM",
    "KZUHBPEZEERFLMSNOWBALLH",
    "NSNOWBOARDYTVWYCLEVOHSA",
    "ACOCRQLGZIYCHODRAZZILBI",
    "LBVKKWANZAAQINWOLPWONSL",
    "BFREEZINGRAINSLILGTMELT",
    "HQPYLWHFMNFFUFPSWXNUMMV"
};
