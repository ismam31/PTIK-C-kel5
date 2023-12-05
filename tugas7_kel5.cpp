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

void displaySepatu(vector<Sepatu> &sepatuList)
{
    for (int i = 0; i < sepatuList.size(); i++)
    {
        cout << i + 1 << ". " << sepatuList[i].merk << " ";
        cout << sepatuList[i].ukuran << " ";
        cout << sepatuList[i].warna << " ";
        cout << sepatuList[i].harga << endl;
    }
}

void createSepatu(vector<Sepatu> &sepatuList)
{
    Sepatu newSepatu;
    cout << "Masukkan merk sepatu: ";
    cin >> newSepatu.merk;
    cout << "Masukkan ukuran sepatu: ";
    cin >> newSepatu.ukuran;
    cout << "Masukkan warna sepatu: ";
    cin >> newSepatu.warna;
    cout << "Masukkan harga sepatu: ";
    cin >> newSepatu.harga;
    sepatuList.push_back(newSepatu);
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