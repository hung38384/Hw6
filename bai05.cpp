#include<iostream>
using namespace std;

void dequyTinhTong(int n, int* s, int tong, int lastnum, int index)
{
    if (tong == n){
        for(int i = index - 1; i >= 0; i--){
            cout << s[i] << " ";
        }
        cout << endl;
        return;
    }
    if (tong > n ||  lastnum > n - tong){
        return;
    }
    for (int num = n - tong; num >= lastnum; num--)
    {
        s[index] = num;
        dequyTinhTong(n, s, tong + num, num, index + 1);
    }
}

void in(int n)
{
    int* s = new int[n];
    dequyTinhTong(n, s, 0, 1, 0);
    delete[] s;
}

int main ()
{
    int n;
    cin >> n;
    in(n);
}