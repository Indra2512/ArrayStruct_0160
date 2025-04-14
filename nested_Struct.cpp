#include <iostream>
#include <string>
using namespace std;

struct Skill
{
    string Skill1;
    string Skill2;
    string Skill3;
};

struct Hero
{
    string nama;
    string role;
    string tipe;
    Skill skill;
};

int main()
{
    Hero arhero[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Hero ke- " << i + 1 << endl;
        cout << "Masukkan nama hero = ";
        getline(cin, arhero[i].nama);
        cout << "Masukkan jenis role = ";
        getline(cin, arhero[i].role);
        cout << "Masukkan tipe hero = ";
        cin >> arhero[i].tipe;
        cin.ignore();

        cout << "Masukkan Skill 1 ";
        getline(cin, arhero[i].skill.Skill1);
        cout << "Masukkan Skill 2 ";
        getline(cin, arhero[i].skill.Skill2);
        cout << "Masukkan Skill 3 ";
        getline(cin, arhero[i].skill.Skill3);
    }

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Tampilkan Hero" << endl;
        cout << endl;
        {
        }

        cout << "Nama Hero = " << arhero[i].nama << endl;
        cout << "Jenis Role Hero = " << arhero[i].role << endl;
        cout << "Tipe Hero = " << arhero[i].tipe << endl;

        cout << "Skill 1 =" << arhero[i].skill.Skill1 << endl;
        cout << "Skill 2 =" << arhero[i].skill.Skill2 << endl;
        cout << "Skill 3 =" << arhero[i].skill.Skill3 << endl;
        cout << endl;
    }
}