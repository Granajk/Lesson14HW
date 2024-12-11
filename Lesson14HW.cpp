
#include "MyQueue.h"

int main()
{
    myQueue::Queue<string> queue;

    queue.push_back("one");
    queue.push_back("two");
    queue.push_back("three");
    queue.push_back("four");
    queue.push_back("five");
    queue.push_back("six");
    cout << "Queue: ";
    queue.show();

    queue.pop_front();
    queue.pop_front();

    queue.push_back("seven");

    cout << "Added seven: ";
    queue.show();

    int count = queue.countFT('f', 't');
    std::cout << "count of strings with 'f' or 't': " << count << std::endl;
}
