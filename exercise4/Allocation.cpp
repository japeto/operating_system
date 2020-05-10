#include "Allocation.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

Allocation::Allocation()
{
}

void Allocation::capture_positions()
{
    std::cin >> partitions_number_value;
    for (int i = 0; i < partitions_number_value; i++)
    {
        int partition;
        std::cin >> partition;
        partitions_list_value.push_back(partition);
    }
}

void Allocation::capture_process()
{
    std::cin >> process_number_value;
    for (int i = 0; i < process_number_value; i++)
    {
        int partition;
        std::cin >> partition;
        process_list_value.push_back(partition);
    }
}

void Allocation::define_method(int method)
{
    method_value = method;
}

void Allocation::first_fit()
{

    for (int process = 0; process < process_number_value; process++)
    {
        bool is_allocated = false;
        int size_process = process_list_value[process];

        for (int memory = 0; memory < partitions_number_value; memory++)
        {
            int size_memory = partitions_list_value[memory];

            if (size_process <= size_memory)
            {
                is_allocated = true;
                partitions_list_value[memory] = size_memory - size_process;
                std::cout << "P" << process << " -> " << size_process << " is put in " << size_memory << ", " << memory + 1 << " partition."
                          << "\n";
                break;
            }
        }
        if (!is_allocated)
        {
            std::cout << "P" << process << " -> " << size_process << " Not allocated."
                      << "\n";
        }
    }
}

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[1] < v2[1];
}

bool longcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[1] > v2[1];
}

void Allocation::best_fit()
{
    for (int process = 0; process < process_number_value; process++)
    {
        bool is_allocated = false;
        int size_process = process_list_value[process];
        std::vector<std::vector<int>> aux_best_fit;

        for (int memory = 0; memory < partitions_number_value; memory++)
        {
            int size_memory = partitions_list_value[memory];

            if (size_process <= size_memory)
            {
                is_allocated = true;
                int current_dif = size_memory - size_process;
                std::vector<int> aux = {memory, current_dif};
                aux_best_fit.push_back(aux);
            }
        }
        if (!is_allocated)
        {
            std::cout << "P" << process << " -> " << size_process << " Not allocated."
                      << "\n";
        }
        else
        {
            std::sort(aux_best_fit.begin(), aux_best_fit.end(), sortcol);
            std::vector<int> aux = aux_best_fit[0];
            int index_memory = aux[0];
            int value = partitions_list_value[index_memory];
            int rest_value = value - size_process;
            partitions_list_value[index_memory] = partitions_list_value[index_memory] - rest_value;
            std::cout << "P" << process << " -> " << size_process << " is put in " << value << ", " << index_memory + 1 << " partition."
                      << "\n";
        }
    }
}

void Allocation::wors_fit()
{
    for (int process = 0; process < process_number_value; process++)
    {
        bool is_allocated = false;
        int size_process = process_list_value[process];
        std::vector<std::vector<int>> aux_wors_fit;

        for (int memory = 0; memory < partitions_number_value; memory++)
        {
            int size_memory = partitions_list_value[memory];

            if (size_process <= size_memory)
            {
                is_allocated = true;
                int current_dif = size_memory - size_process;
                std::vector<int> aux = {memory, current_dif};
                aux_wors_fit.push_back(aux);
            }
        }
        if (!is_allocated)
        {
            std::cout << "P" << process << " -> " << size_process << " Not allocated."
                      << "\n";
        }
        else
        {
          
            std::sort(aux_wors_fit.begin(), aux_wors_fit.end(), longcol);
            std::vector<int> aux = aux_wors_fit[0];
            int index_memory = aux[0];
            int major_dif = aux[1];
            int value_memory = partitions_list_value[index_memory];
            int rest_value_memory = value_memory - size_process;
            partitions_list_value[index_memory] = value_memory - size_process;            
            std::cout << "P" << process << " -> " << size_process << " is put in " << value_memory << ", " << index_memory+1 << " partition."
                      << "\n";
        }
    }
}

void Allocation::execute()
{
    if (method_value == 1)
    {
        Allocation::first_fit();
    }
    else if (method_value == 2)
    {
        Allocation::best_fit();
    }
    else if (method_value == 3)
    {
        Allocation::wors_fit();
    }
}
