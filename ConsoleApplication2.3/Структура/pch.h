#ifndef PCH_H
#define PCH_H

enum type { PLANE, TRAINE };
struct plane {
	type key;
	int spead;
	int distance;
	int cargo;
	int range;
	int c;
};
struct traine {

	type key;
	int spead;
	int distance;
	int count;
};
struct transport {
	type key;
	int spead;
	int distance;
};

struct Node {
	Node() {
		this->Next = nullptr;
		this->Prev = nullptr;
		this->data = nullptr;
	};
	Node* Next;
	Node* Prev;
	transport* data;
};
struct container {
	Node* Top;
	int count;
};

// TODO: add headers that you want to pre-compile here

#endif //PCH_H#pragma once
