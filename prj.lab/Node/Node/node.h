#pragma once
#include <iostream>
#include <ostream>
#include <sstream>
class Line {

	//����� ����� ������� � �� ��� �� ������� ���� �������� ��������� ���� ��������
	class Node {
		Node() { };
		int a;
		Node* parent;
		Node* child;

		Node(int a) {};
		//����� ������� ������� ����������� �������� ����� ������, � ����� �� ����
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