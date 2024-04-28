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

//https://www.w3schools.com/cpp/cpp_booleans.asp  referensi dari bagian ini
bool mencari(const char* kata) {		//bool untuk fungsi true atau false deklarasi fungsi mencari yang menerima satu parameter
    int kataLen = strlen(kata);			//strlen adalah fungsi untuk menghitup panjang dari string


	//referensi ini berasal dari GPT
    // Check horizontally
    for (int i = 0; i < 24; i++) {						//loop luar ini berjalan melalui setiap baris dalam array matrix
        for (int j = 0; j <= 24; j++) {					//Loop tengah ini berjalan melalui setiap kolom dalam baris saat ini dari array matrix.
            bool ketemu = true;							//Variabel ketemu diatur ke true untuk setiap posisi baru dalam array matrix yang sedang diperiksa.
            for (int k = 0; k < kataLen; k++) {			//Loop dalam ini berjalan melalui setiap karakter dalam string kata.
                if (matrix[i][j + k] != kata[k]) {		//Jika karakter saat ini dalam string kata tidak sama dengan karakter yang sesuai dalam array matrix
                    ketemu = false;						//maka ketemu diatur ke false dan loop dalam dihentikan.
                    break;								//berhenti
                }
            }
            if (ketemu) {								//Jika ketemu masih true setelah memeriksa semua karakter dalam string kata
                return true;							//maka fungsi mengembalikan true, menunjukkan bahwa string kata telah ditemukan dalam array matrix.
            }
        }
    }

    // Check vertically
    for (int i = 0; i <= 24; i++) {
        for (int j = 0; j < 24; j++) {
            bool ketemu = true;
            for (int k = 0; k < kataLen; k++) {
                if (matrix[i + k][j] != kata[k]) {
                    ketemu = false;
                    break;
                }
            }
            if (ketemu) {
                return true;
            }
        }
    }

    // Check diagonally (up-left)
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24; j++) {
            bool ketemu = true;
            for (int k = 0; k < kataLen; k++) {
                if (matrix[i - k][j - k] != kata[k]) {
                    ketemu = false;
                    break;
                }
            }
            if (ketemu) {
                return true;
            }
        }
    }

    // Check diagonally (up-right)
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j <= 24; j++) {
            bool ketemu = true;
            for (int k = 0; k < kataLen; k++) {
                if (matrix[i - k][j + k] != kata[k]) {
                    ketemu = false;
                    break;
                }
            }
            if (ketemu) {
                return true;
            }
        }
    } 
    // Check diagonally (down-right)
    for (int i = 0; i <= 24; i++) {						//loop luar ini berjalan melalui setiap baris dalam array matrix
        for (int j = 0; j <= 24; j++) {					//Loop tengah ini berjalan melalui setiap kolom dalam baris saat ini dari array matrix.
            bool ketemu = true;							//Variabel ketemu diatur ke true untuk setiap posisi baru dalam array matrix yang sedang diperiksa.
            for (int k = 0; k < kataLen; k++) {			//Loop dalam ini berjalan melalui setiap karakter dalam string kata.
                if (matrix[i + k][j + k] != kata[k]) {		//Jika karakter saat ini dalam string kata tidak sama dengan karakter yang sesuai dalam array matrix
                    ketemu = false;						//maka ketemu diatur ke false dan loop dalam dihentikan.
                    break;								//berhenti
                }
            }
            if (ketemu) {								//Jika ketemu masih true setelah memeriksa semua karakter dalam string kata
                return true;							//maka fungsi mengembalikan true, menunjukkan bahwa string kata telah ditemukan dalam array matrix.
            }
        }
    }

    // Check diagonally (down-left)
    for (int i = 0; i <= 24; i++) {
        for (int j = 0; j < 24; j++) {
            bool ketemu = true;
            for (int k = 0; k < kataLen; k++) {
                if (matrix[i + k][j - k] != kata[k]) {
                    ketemu = false;
                    break;
                }
            }
            if (ketemu) {
                return true;
            }
        }
    }

    return false;
}

int main() {
	
	char lagi = 'y'; 	//Mendeklarasikan variabel karakter bernama lagi dan menginisialisasinya dengan nilai 'y' igunakan untuk mengontrol perulangan yang mengulang program.
	
	//menggunakan do agar bisa diulang tanpa keluar dari cmd
	// referensi dari buku programing with c++ halaman 124 tentang do while.
	do{
		
		
	//referensi dari buku programming with c++ halaman 131 tentang nested loop
	for (int i = 0; i < 24; ++i) {				//loop pertama mengulang i sebanyak 23 kali dari o
    		for (int j = 0; j < 24; ++j) {			//loop kedua mengulang i sebanyak 23 kali dari o
        		cout << matrix[i][j] << " ";		//ini untuk mencetak nilai matriksnya dari char matriks diatas
     	  	 }
  	      cout <<endl;
 	   }
 	   
    	cout << "masukkan banyak kata yang dicari : ";		//output untuk menampilakak kata di cmd
 	int num;											//deklarasi variable num
  	cin >> num;											//untuk memasukkan inputan cmd ke num, Nilai tersebut kemudian dibaca ke dalam variabel num.
  	cin.ignore(); 										//menghapus buffer input.

	char words[num][25]; 								//array yang dideklarasikan untuk menyimpan kata-kata.

  	for (int i = 0; i < num; i++) {						//melooping dari 0 hingga num(banyak inputan yang diisi sebelumnya di cmd)
 	   	cout << "kata ke-"<<i+1<<" : ";						//menampilkan kata ke- sebanyak i+1 di cmd
 		cin.getline(words[i], 25);						//membaca satu baris input dari pengguna keladam array word[i] dengan karakter maksimum sebanyak 25
  		kapital(words[i]); 
	}
	while(lagi == 'y');							//jika nilai lagi adalah 'y', maka akan mengulagn perintah dari awal
	cin.get();							//digunakan untuk membaca satu karakter tambahan (biasanya karakter newline) dari aliran masukan

    return 0;
}
