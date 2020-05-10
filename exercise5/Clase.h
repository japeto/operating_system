
#define CLASE_H

#include <iostream>
#include<vector>

using namespace std;

class Clase
{
    public:
        Clase();
       void inicializar(int totalme, int blosize, vector<int> pro);
        void MFT();
        void MVT();
        virtual ~Clase();

    protected:

    private:
        int total_memory;
        int block_size;
        vector<int> processes;
};