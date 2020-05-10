#ifndef ALLOCATION_H
#define ALLOCATION_H

#include <vector>
#include <iostream>

class Allocation{
	public:
		Allocation();
		~Allocation();
		void capture_positions();
		void capture_process();
		void define_method(int method);
		void execute();

	private:
		int method_value;
		int partitions_number_value;
		std::vector<int> partitions_list_value;
		int process_number_value;
		std::vector<int> process_list_value;
		void first_fit();
		void best_fit();
		void wors_fit();
};
#endif
