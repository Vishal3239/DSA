#include <iostream>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    // insertison
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    // delete root
    void Delete()
    {
        if (size == 0)
        {
            cout << "nothing delete";
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftInd = 2 * i;
            int rightInd = 2 * i + 1;
            if (leftInd < size && arr[i] < arr[leftInd])
            {
                swap(arr[i], arr[leftInd]);
                i = leftInd;
            }
            else if (rightInd < size && arr[i] < arr[rightInd])
            {
                swap(arr[i], arr[rightInd]);
                i = rightInd;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h;
    int n=5;
    // cin >> n;
    int arr[n]={ 50,55,53,52,54 };
    // for (int i = 0; i < n; ++i)
    //     cin >> arr[i];
    for (int i = 0; i < n; ++i)
    {
        h.insert(arr[i]);
    }
    h.print();
    h.Delete();
    h.print();
    return 0;
}