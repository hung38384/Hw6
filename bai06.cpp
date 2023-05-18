#include<iostream>
#include<string>
#include<vector>
using namespace std;

void dequyTu(int n, string tu, vector <string> &ketqua){
    if (tu.length() == n){
     ketqua.push_back(tu);
     return;
    }
    for (int i = 0; i < n; i++){
        char kitu = '1' + i;
        if(tu.find(kitu) == string :: npos ){
        string tumoi;
        tumoi = tu + kitu;
    dequyTu(n,tumoi,ketqua);
    }
}
}

void nhap(int n) {
    cin >> n;
    vector <string> ketqua;
    dequyTu(n, "", ketqua);
    for (const string& tu : ketqua)
    {
        cout << tu << endl;
    }
}

int main ()
{
    int n;
    nhap(n);
}