#include <iostream>

using namespace std;

void go_left(int &idx);
void go_right(int &idx);

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
    cout << "compile complete" << endl;
    return 0;
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