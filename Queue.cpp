
#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, mx = 5;
    int queue_array[5];

public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

        //cek apakah antrian penuh
        if ((FRONT == 0 && max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue overflow\n";
            return;
        }

        //cek apakah antrian kosong
        if (FRONT == -1) {
            FRONG = 0;
            REAR = 0;
        }

    }
};

int main()
{
    std::cout << "Hello World!\n";
}

