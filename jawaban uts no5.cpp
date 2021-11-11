#include <iostream>
using namespace std;

int main(){ 
    int n, s, i, j; //fungsi perulangan

    cout<< "masukan jumlah baris : ";
    cin>>n; //fungsi jumlah baris
    for(i=i;i<=n;i++){
        for(s=1;s<n;s++)
        cout<<" "; //untuk menampilkan output ke layar
        for(j=1; j<=1; j++)
        cout << "*";
        cout<<"\n"; //menambah baris baru
    }
    return 0;
}