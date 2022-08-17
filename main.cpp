//
//  main.cpp
//  Final project DS
//
//  Created by Chhin Somalin on 17/8/22.
//

#include <iostream>
using namespace std;

class sortDataClass {

private:

    int* data;
    int dataSize, maxNum;

public:
    void randomize() {
        for (int i = 0; i < dataSize; i++)
            data[i] = rand() % maxNum;
    }

    sortDataClass(int n, string dataset, int m) {
        dataSize = n;
        maxNum = m;

        data = new int[dataSize];
        if (dataset == "inorder")
            for (int i = 0; i < dataSize; i++) data[i] = i;
        else if (dataset == "reverseorder")
            for (int i = 0; i < dataSize; i++) data[i] = maxNum - i - 1;
        else if (dataset == "random")
            randomize();
        else
            cout << "Error";
    }

    void printData() {
        for (int i = 0; i < dataSize; i++)
            cout << data[i] << endl;
    }
};

int main()
{
    
    int inputNum = 30;
    int maximum = 100;

    cout << "In-order sorted date (best case):\n" ;
    sortDataClass inorder(inputNum, "inorder", maximum);
    inorder.printData();
    cout << "\n\n\n=============================\n\n\n";

    cout << "\nReverse-order (worst case):\n";
    sortDataClass reverse(inputNum, "reverseorder", maximum);
    reverse.printData();
    cout << "\n\n\n=============================\n\n\n";

    cout << "\nRandom number:\n";
    sortDataClass random(inputNum, "random", maximum);
    random.printData();
    return 0;
}

