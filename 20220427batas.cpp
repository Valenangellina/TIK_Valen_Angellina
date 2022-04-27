#include <iostream>
using namespace std;
int main() {
    int batasbawah, batasatas;
    cout<<"Masukkan batas bawah =";cin>>batasbawah;
    cout<<"Masukkan batas atas =";cin>>batasatas;
    
    if (batasbawah < batasatas) {
     while (batasbawah++ < batasatas){
    cout<<"Data ke -"<<batasbawah<<endl;
    }
    }
    else {
        cout<<"Batasbawah tidak boleh lebih dari batasatas";
    }
    return 0;
}
