#pragma once
#include <iostream>
#include <ostream>
#include <sstream>
class Line {

	//здесь вызов очереди и то как из первого узла получить остальные плюс комманды
	class Node {
		Node() { };
		int a;
		Node* parent;
		Node* child;

		Node(int a) {};
		//нужно описать функцию перемещений значений между узлами, а также их ввод
		int call(const Node& a)
		{
			if (a.parent == nullptr)
			{
				std::cout << (a.a);
				while (a != nullptr)
				{
					a = a.child;
				}
			};

			return 0;
		};
	};



};