#include <stdio.h>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Hashtable {
    unordered_map<string, unordered_map<string, bool>> hashmap;

public:
    // Agrega una nueva lista a nuestro Hash table como valor
    void put(string key, unordered_map<string, bool> val) {
        hashmap[key] = val;
    }

    unordered_map<string, bool> get(string key) {
        unordered_map<string, bool> nada({{"", false}});
        auto existe = hashmap.find(key);

        if(existe == hashmap.end())
            return nada;
        else
            return hashmap[key];
    }
    // mapa.insert(valor, posicion)

};

vector<string> split(string ) {

}

int main(int argc, char **argv){
    // Leemos el numero de escenarios 
    int num_es, P, N, ch;
    Hashtable grafo;

    scanf("%d", &num_es);
    printf("Scenario %d\n", num_es);
    for (int i=0; i< num_es; i++) {
        // Leemos el numero de documentos
        scanf("%u%u", &P, &N);
        while( (ch=getchar()) != EOF  &&  ch != '\n' );

        // Resolucion del problema
        for (int j=0; j< P; j++) {
            char &linea;
            for (int k=0; k < linea.length; k++) {
                string n = linea(k);
                unordered_map<string, bool> mapa = {};
                for (int t=0; t<linea.length; t++) {
                    mapa[linea(t)]= false;
                    //mapa.insert(linea(t),0);                    
                }
                grafo.put(n,mapa);
            } 
        }
        for (int j=0; j<N; j++) {
            char &linea;
            for (int k=0; k < linea.length; k++) {
                
            }
        }
    }
    cout << 'puta' << endl;
    return 0;
}
