#include <iostream>
#include "heap.h"

#define WAIT while(cin.get() != '\n') \
                cin.get()

using namespace std;

int main()
{
    int num;
    Heap<int> heap;
    try
    {
        cout << "enter int (0 to quit): ";
        cin >> num;
        while (num != 0)
        {
            heap.heapInsert(num);
            cout << "inserted " << num << endl;
            heap.dump();  // demonstrate heap contents
            cout << "enter int (0 to quit): ";
            cin >> num;
        }
    }
    catch (logic_error error)
    {
	cout << error.what() << endl;
    }
    
    WAIT; // discard the '\n' after 0
    cout << "hit <ENTER> to continue ";
    WAIT;
    while (!heap.heapIsEmpty())
    {
	heap.heapDelete(num);
	cout << "deleted " << num << endl;
	heap.dump();  // demonstrate heap contents
	if (!heap.heapIsEmpty())
        {
           cout << "hit <ENTER> to continue ";
           WAIT;
        }
    }
    return 0;
}

