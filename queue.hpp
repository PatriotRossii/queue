#pragma once

template<typename T>
class queue {
public:
	virtual void enqueue(const T&) = 0;
	virtual T dequeue() = 0;
	bool empty() const;
};
