#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int A = 1;
    int B = 0;
    int C;

    for (C = 1; C <= 5; C++) {
        cout << B << " ";
        A += 2;
        B = A * A;
    }

    cout << endl; // tambahkan baris baru setelah selesai mencetak output

    return 0;
}
