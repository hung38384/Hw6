#include<iostream>
#include<string>
#include<vector>
using namespace std;

void dequyTu(int k, int n, string tu, vector <string> &ketqua){
    if (tu.length() == k){
     ketqua.push_back(tu);
     return;
    }
    for (int i = 0; i < n; i++){
        char kitu = 'a' + i;
        if(tu.find(kitu) == string :: npos ){
        string tumoi;
        tumoi = tu + kitu;
    dequyTu(k,n,tumoi,ketqua);
    }
}
}

void nhap(int n, int k) {
    cin >> n >> k;
    if (n < k || k > 26) cout << "Invalid" << endl;
    vector <string> ketqua;
    dequyTu(k, n, "", ketqua);
    for (const string& tu : ketqua)
    {
        cout << tu << endl;
    }
}

int main ()
{
    int n,k;
    nhap(n,k);
}