#include <ostream>
#include <cstring>
using namespace std;

char* cuvinte[] = {"zero", "unu", "doi", "trei", "patru", "cinci", "sase", "sapte", "opt", "noua","zece"};

char* codifica(int n){
    if(n == 0) return cuvinte[0];
    char* rezultat = new char[100];
    strcpy(rezultat, "");
    while(n > 0){
        char temp[20];
        strcpy(temp, cuvinte[n % 10]);
        strcat(temp, rezultat);
        strcpy(rezultat, temp);
        n /= 10;
    }
    return rezultat;
}

int main(){
    int numar;
    cin >> numar;
    cout << "Numarul " << numar << " codificat in cuvinte este: " << codifica(numar) << endl;
    return 0;
}