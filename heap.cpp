#include <iostream>
#include <array>
using namespace std;

#define exec_check() cout << "execute complete " << endl;
void go_left(int &idx);
void go_right(int &idx);

const int EMPTY = -366568484;

int main()
{
    int arr[256];
    int idx = 0;
    for(int i = 0; i < 256; i++)
    {
        arr[i] = i;
    }
    cout << "now : " << arr[idx] << endl;
    go_right(idx);
    cout << "left : " << arr[idx] << endl;
    go_left(idx);
    cout << "right : " << arr[idx] << endl;
    go_right(idx);
    cout << "left : " << arr[idx] << endl;
    exec_check();
    return 0;
}

void heapify(int arr[])
{

}

int pop(int arr[])
{
    int item = arr[0];
    arr[0] = EMPTY;
    return item;
}

int push(int arr[], int item)
{
    int idx = 0;
    while(arr[idx] != EMPTY) 
        idx++;
    arr[idx] = item;
}

void go_left(int &idx)
{
    idx <<= 1;
    idx += 1;
}

void go_right(int &idx)
{
    idx <<= 1;
    idx += 2;
}