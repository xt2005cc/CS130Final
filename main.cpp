#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Scores{
    int arr[3];
    int sum;
    double avg;

    Scores(){
        sum = 0;
        avg = 0;
        for(int i = 0; i < 3; i++)
        arr[i]=0;
    }
};