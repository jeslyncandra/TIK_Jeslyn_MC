#include <iostream>
#include <math.h>
using namespace std;

int
main ()
{
  float a = sqrt (16);		//menghitung akar kuadrat
  float b = cbrt (27);		//akar kubik
  float c = pow (4.334, 2.231);	//menghitung pangkat
  //tambahkan dan tampilkan d=sin e=cos f=tan

  float d = sin (45);//menghitung sin
  float e = cos (45);//menghitung cos
  float f = tan (45);//menghitung tan

  float g = round (c);

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;
  cout << g << endl;
  return 0;
}
