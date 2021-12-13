#ifndef PCH_H
#define PCH_H

//enum type { PLANE, TRAINE };
enum type_of_key { PLANE, TRAINE, SHIP };
enum type_of_ship { LINER, TUG, TANKER };
struct plane {
	/*type key;*/
	type_of_key key;
	int spead;
	int distance;
	int range;
	int c;
};
struct traine {

	/*type key;*/
	type_of_key key;
	int spead;
	int distance;
	int count;
};
struct transport {
	/*type key;*/
	type_of_key key;
	int spead;
	int distance;
};
struct ship {
	type_of_key key;
	int spead;
	int distance;
	int water_displacement;
	type_of_ship type;
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
