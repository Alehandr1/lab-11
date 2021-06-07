#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{   
    const unsigned int DIM1 = 3;
    const unsigned int DIM2 = 5;

    double A[] = {4, 3, 1, 14, 9, 2, 11};
    double Sum;

    cout << "Original: [ ";
    for (int i = 0; i < 7; ++i) {
        cout << A[i] << " " ;
    }
    cout<< "]" << endl;

    Sum = 0;
    for(int i = 0; i < 7; i++)
        Sum = Sum + A[i];

    cout << "Summa: " << Sum << endl;
    cout << "Avarage: " << Sum/7 << "\n" << endl;

    int ary[DIM1][DIM2] = {
        { 1, 2, 3, 4, 5 },
        { 2, 4, 6, 8, 10 },
        { 3, 6, 9, 12, 15 }
    };  
    
    cout << "Oroginal: " << endl;

    for (int i = 0; i < DIM1; i++) {
      for (int j = 0; j < DIM2; j++) {
          cout << setw(4) << ary[i][j];
      }
      cout << endl;
    }

    for (int i=0; i < DIM1; i++)
    {
      for (int j=0; j < DIM2; j++)
      {
        Sum += ary[i][j];
      }
    }

    cout << "Summa: " << Sum <<endl;
    cout << "Avarage: " << Sum/15 << "\n" << endl;

  return 0;
}
