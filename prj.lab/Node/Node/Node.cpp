#include "node.h"

int main()
{
    std::cout << "Hello World!\n";
}

int Line::Node::call(const Node& a)
{
    if (a.parent != nullptr)
    {
        a = a.parent;
    }

    return 0;
}
