#pragma once

#include <stdexcept>

#include "queue.hpp"

template<typename T, std::size_t N = 256>
class array_queue: queue<T> {
	T array[N];
	T* write{array};
	T* read{array};
public:
	void enqueue(const T& value) override {
		*write = value;
		if(write > array + N) {
			write = array;
		}
		if(write + 1 == read) {
			throw std::runtime_error{"I can't do that, sorry"};
		}
		++write;
	}
	T dequeue() override {
		T value = *(read++);
		if(read > array + N) {
			read = array;
		}
		return value;
	}
	bool empty() const override {
		return write == read;
	}
};