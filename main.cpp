#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile;

    int num = 0;
    vector<int>myVect;
    
    inFile.open("/Users/stahl/Desktop/Projects/Advent Of Code 2020/AdventOfCode2020Day1/AdventOfCode2020Day1/data.txt");
    
//    if (inFile) {
//        cout << "file open";
//    } else {
//        cout << "file isnt open";
//    }
    
    while (!inFile.eof()) {
        inFile >> num;
        
        myVect.push_back(num);
    }
    
    int vecSize = myVect.size();
    
    for (int x = 0; x < vecSize; x++) {
        for (int y = 0; y < vecSize; y++) {
            for (int z = 0; z < vecSize; z++) {
                int tempNum = myVect.at(x) + myVect.at(y) + myVect.at(z);

                if (tempNum == 2020) {
                    num = myVect.at(x) * myVect.at(y) * myVect.at(z);
                    //just exit
                }
            }
        }
    }
    
    cout << "total = " << num << endl;
    
//    num = 0;
//    int num2 = 1;
//    int end = myVect.at(vecSize-num2);
//
//
//    for (int w = 0; w < vecSize - 2 && num != 2020; w++) {
//        int front = myVect.at(w);
//
//        for (int c = w+1; c < (vecSize - num2); c++) {
//
//            int num3 = myVect.at(c);
//
//            int tempNum = front + end + num3;
//
//
//
//            if (tempNum == 2020) {
//                num = front * end * num3;
//                cout << "total = " << num << endl;
//            }
//
//        }
//        num2++;
//
//    }
//
    
}
