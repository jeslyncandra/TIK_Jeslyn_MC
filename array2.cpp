#include <iostream>

using namespace std;
int main(){
    int angka[3][4] = {
        {1, 2, 4, 5},
        {3, 4, 5, 6},
        {5, 6, 4, 4},
    };
    cout<<angka[0][0]<<endl;
    cout<<angka[0][1]<<endl;
    cout<<angka[0][2]<<endl;
    cout<<angka[2][3]<<endl;
     return 0;
}

** kolom kesamping / baris kebawah

----------------------------------
#include <iostream>

using namespace std;
int main(){
    int angka[3][4] = {
        {1, 2, 4, 5},
        {3, 4, 5, 6},
        {5, 6, 4, 4},
    };
    for (int i=0; i<3; i ++){
        for (int j=0; j<4; j++){
            cout<<angka[i][j];
        }
        cout<<endl;
       }
     return 0;
}

**ENTER = 1245
          3456
          5644
