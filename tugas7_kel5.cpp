#include <iostream>
#include <vector>

using namespace std;

struct Kaos
{
    string merk;
    string ukuran;
    string warna;
    int harga;
};

void displayKaos(vector<Kaos> &KaosList)
{
    for (int i = 0; i < KaosList.size(); i++)
    {
        cout << i + 1 << ". " << KaosList[i].merk << " ";
        cout << KaosList[i].ukuran << " ";
        cout << KaosList[i].warna << " ";
        cout << KaosList[i].harga << endl;
    }
}

void createKaos(vector<Kaos> &KaosList)
{
    Kaos newKaos;
    cout << "Masukkan merk Kaos: ";
    cin >> newKaos.merk;
    cout << "Masukkan ukuran Kaos: ";
    cin >> newKaos.ukuran;
    cout << "Masukkan warna Kaos: ";
    cin >> newKaos.warna;
    cout << "Masukkan harga Kaos: ";
    cin >> newKaos.harga;
    KaosList.push_back(newKaos);
}

void updateSepatu(vector<Sepatu> &sepatuList)
{
    int index;
    cout << "Masukkan nomor sepatu yang ingin diupdate: ";
    cin >> index;
    cout << "Masukkan merk sepatu: ";
    cin >> sepatuList[index - 1].merk;
    cout << "Masukkan ukuran sepatu: ";
    cin >> sepatuList[index - 1].ukuran;
    cout << "Masukkan warna sepatu: ";
    cin >> sepatuList[index - 1].warna;
    cout << "Masukkan harga sepatu: ";
    cin >> sepatuList[index - 1].harga;
}

void deleteSepatu(vector<Sepatu> &sepatuList)
{
    int index;
    cout << "Masukkan nomor sepatu yang ingin dihapus: ";
    cin >> index;
    sepatuList.erase(sepatuList.begin() + index - 1);
}

int main()
{
    vector<Sepatu> sepatuList;
    int choice;

    while (true)
    {
        cout << "1. Tampilkan seluruh sepatu" << endl;
        cout << "2. Buat sepatu baru" << endl;
        cout << "3. Update sepatu" << endl;
        cout << "4. Hapus sepatu" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            displaySepatu(sepatuList);
            break;
        case 2:
            createSepatu(sepatuList);
            break;
        case 3:
            updateSepatu(sepatuList);
            break;
        case 4:
            deleteSepatu(sepatuList);
            break;
        case 5:
            return 0;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}