#include "Clase.h"
#include <iostream>
#include<vector>

using namespace std;

Clase::Clase()
{
    //ctor
}

Clase::~Clase()
{
    //dtor
}

void Clase::inicializar(int totalme, int blosize, vector<int> pro){
    total_memory= totalme;
    block_size= blosize;
    processes= pro;
}

void Clase::MFT(){
     int memoryAllocated=0;
     int internalFrag=0;
     int externalFrag=0;

     for(int i=0; i<processes.size();i++){
        if(processes[i]<=block_size&&(memoryAllocated+block_size)<=total_memory){
            cout<<"P"<<i<<" -> "<<processes[i]<<" is put in "<<block_size<<", "<<(block_size-processes[i])<<" fragmentation."<<endl;
            internalFrag+=block_size-processes[i];
            memoryAllocated+=block_size;
        }else{
            if(processes[i]<=block_size){
                externalFrag+=processes[i];
                 cout<<"P"<<i<<" -> "<<processes[i]<<" Not allocated."<<endl;
            }else{
                cout<<"P"<<i<<" -> "<<processes[i]<<" Not allocated."<<endl;
            }
           
        }
     }
     cout<<"Memory Allocated: "<<memoryAllocated<<endl;
     cout<<"Internal fragmentation: "<<internalFrag<<endl;
     cout<<"External fragmentation: "<<externalFrag<<endl;

}

void Clase::MVT(){
     int memoryAllocated=0;
     int internalFrag=0;
     int externalFrag=0;

     for(int i=0; i<processes.size();i++){
        if((processes[i]+memoryAllocated)<=total_memory){
            cout<<"P"<<i<<" -> "<<processes[i]<<" is put in Mem."<<endl;
            memoryAllocated+=processes[i];
        }else{
           cout<<"P"<<i<<" -> "<<processes[i]<<" Not allocated."<<endl;
        }
     }
     externalFrag=total_memory-memoryAllocated;
     cout<<"Memory Allocated: "<<memoryAllocated<<endl;
     cout<<"Internal fragmentation: -1"<<endl;
     cout<<"External fragmentation: "<<externalFrag<<endl;

}


