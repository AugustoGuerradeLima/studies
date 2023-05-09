#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n_testes;
    while (true){
        cin >> n_testes;
        if (n_testes == 0)break;
        map<string, int> especies;
        for (int i = 0; i < n_testes; i++){
            string mDNA;
            cin >> mDNA;
            sort(mDNA.begin(), mDNA.end());
            especies[mDNA]++;
        }
        cout << especies.size() << endl;
    }
    return (0);
}
