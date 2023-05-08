#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int N;
    string linha;

    vector<int>numeros;
    vector<char>senha_codificada;
    vector<int>senha_decodificada;
    
    vector<pair<int,int>>senha_pares;
    map<char,pair<int,int>>associacao;

    vector<vector<pair<int,int>>>lista_senha_pares;
    vector<vector<char>>lista_senhas_codificadas;
    vector<map<char,pair<int,int>>>lista_associacoes;

    getline(cin, linha);
    stringstream stream_linha(linha); 
    stream_linha>>N;

    for(int i=0;i<N;i++){
        getline(cin,linha);
        linha.erase(remove(linha.begin(), linha.end(), ' '), linha.end());
        for(char c:linha){
            if(c<'A'){
                numeros.push_back((int)c-48);
            }
            else{
                senha_codificada.push_back(c);
            }
        }
        char letra = 'A';
        for(int i=1;i<=10;i+=2){
            associacao[letra]=make_pair(numeros[i-1],numeros[i]);
            // cout<<letra<<":"<<numeros[i-1]<<" "<<numeros[i]<<endl;//teste de funcionamento associacao de letras a pares
            letra++;
        }
        for(char c:senha_codificada){
            // cout<<c;//teste pra ver se o for funciona
            senha_pares.push_back(make_pair(associacao[c].first,associacao[c].second));
            // cout << "c[" << c << "] = (" << associacao[c].first << ", " << associacao[c].second << ")" << endl;
        }
        lista_senha_pares.push_back(senha_pares);
        lista_senhas_codificadas.push_back(senha_codificada);
        lista_associacoes.push_back(associacao);
        numeros.clear();
        senha_codificada.clear();
        senha_pares.clear();
        associacao.clear();
    }
    for(int i=0;i<6;i++){
        int digito;
        for(int j=0;j<N-1;j++){
            if(lista_senha_pares[j][i].first == lista_senha_pares[j+1][i].first 
            && lista_senha_pares[j][i].second != lista_senha_pares[j+1][i].second
            ||lista_senha_pares[j][i].first == lista_senha_pares[j+1][i].second
            &&lista_senha_pares[j][i].second != lista_senha_pares[j+1][i].first){
                digito = lista_senha_pares[j][i].first;
            }
            else{
                digito = lista_senha_pares[j][i].second;
            }
        }
        senha_decodificada.push_back(digito);
    }
    for(int i:senha_decodificada){
        cout<<i<<" ";
    }
    return(0);
}
