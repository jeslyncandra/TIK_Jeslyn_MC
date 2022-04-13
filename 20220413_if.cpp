#include <iostream>
using namespace std;

int main(){
    /*
    Jika nilai >= 90 lulus sangat memuaskan
    Jika nilai >= 80 lulus memuaskan
    Jika nilai >= 75 cukup
    tidak boleh > 100
    tidak boleh < 0
    < 75 tidak lulus
    */
    int nilai;
    cout<<"masukkan nilai = "; cin>>nilai;
    if (nilai > 100){
        cout<<"nilai diluar jangkauan";
    }
    else if (nilai >= 90){
        cout<<"lulus sangat memuaskan";
    }
    else if (nilai >= 80){
        cout<<"lulus memuaskan";
    }
    else if (nilai >= 75){
         cout<<"cukup";
    }
    else if (nilai < 0){
        cout<<"nilai diluar jangkauan";
    }
    else {
        cout<<"tidak lulus";
    }
    
    
    return 0;
}//end of main function
