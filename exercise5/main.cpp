#include <iostream>
#include<vector>
#include"Clase.h"
using namespace std;

int main()
{
    int metodo;
    int totalme;
    int blocksize;
    int num_processes;
    vector<int> processes;

    cin>>metodo;
    cin>>totalme;
    cin>>blocksize;    
    cin>>num_processes;
    for(int i=0;i<num_processes;i++){
       int num;
        cin>>num;
        processes.push_back(num);
    }
    Clase *c1= new Clase();
    c1->inicializar(totalme, blocksize, processes);

    if(metodo==1){
        c1->MFT();
    }
    if(metodo==2){
        c1->MVT();
    }
  
    return 0;
}
