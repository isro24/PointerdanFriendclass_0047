#include <iostream>
using namespace std;

class mahasiswa{
public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }

};

int main(){
    mahasiswa mhs{1};       //Objet mhs
    mhs.showNim();      //Member Access Operator

    mahasiswa &refMhs = mhs;        //Pointer References refmhs
    refMhs.nim = 2;     //Member Access Operator
    mhs.showNim();
}