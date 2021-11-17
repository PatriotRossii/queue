#pragma once

#include <list>
#include "queue.hpp"

template<typename T>
class list_queue: queue<T> {
	std::list<T> list;
public:
	void enqueue(const T& value) override {
		list.push_back(value);
	}
	T dequeue() override {
		T value = std::move(list.front());
		list.pop_front();
		return value;
	}
	bool empty() const override {
		return list.empty();
	}
};