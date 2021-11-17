#include <iostream>

#include "array_queue.hpp"
#include "list_queue.hpp"

int main() {
	array_queue<int> array;
	list_queue<int> list;

	for(int i = 0; i < 10; ++i) {
		array.enqueue(i);
		list.enqueue(i);
	}
	for(int i = 0; i < 10; ++i) {
		std::cout <<
			"Array: " << array.dequeue() << "; List: " << list.dequeue() << std::endl;
	}

	std::cout << "Array: " << array.empty() << "; List: " << list.empty() << std::endl;
}
