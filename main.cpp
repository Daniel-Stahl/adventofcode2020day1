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
        for (int y = x+1; y < vecSize; y++) {
            int tempNum = myVect.at(x) + myVect.at(y);
            
            if (tempNum == 2020) {
                num = myVect.at(x) * myVect.at(y);
                //just exit
            }
        }
    }
    
    cout << "total = " << num << endl;
}
