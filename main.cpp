// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;


int main() {
    ifstream iFile("data.txt");

    vector<int> leftList;
    vector<int> rightList;

    while(!iFile.eof()){
        int x, y;
        iFile >> x >> y;
        cerr << x << y << endl;

        leftList.push(x)
        rightList.push(y);
    }

    sort(leftList.begin(), leftList.end());
    sort(rightList.begin(), rightList.end());

    unordered_map<int, int> rightCount;

    for(int num : rightList) {
        rightCount[num]++;
    }

    int similarityScore = 0;

     for (int num : leftList) {
        if (rightCount.find(num) != rightCount.end()) {
            similarityScore += num * rightCount[num];
        }
    }

    return 0;
}