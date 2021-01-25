#include <iostream>
using namespace std;

int rectangle(int x, int y) {
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }return(x, y);
}
void main()
{
    setlocale(0, " ");
    int K, N;
    cout << "¬ведите ширину и высоту:\n";
    cin >> N >> K;
    rectangle(K, N);
   
    system("pause");
}