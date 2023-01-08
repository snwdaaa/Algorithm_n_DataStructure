// 아직 못 품

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// k에서 시작해 각 자리수 조사
bool Calc753Num(int n, const int k, const int &d, vector<bool> &usedNum, int numCount)
{
    // 베이스 케이스
    if(n > k) return false;


    // 여기에서 재귀호출
    // 10^(d-1), 10^(d-2), 10^(d-3) 자리수를 탐색 -> 모두 3, 5, 7 중 하나
    // 3, 5, 7이 사용되면 usedNum 배열 수정
    

    // 여기에서 배열 검사해서 7, 5, 3이 한 번씩 사용 됐는지 확인. 사용했다면 true 반환

    
}

int main(void)
{
    int N, K;
    cin >> K;
    int numCount = 0;   // 753수의 개수
    N = K;
    vector<bool> usedNum = {false, false, false}; // 7, 5, 3이 한 번이라도 사용됐는지

    // k의 자릿수 d 계산
    // 10^0, 10^1, .. 으로 나누었을 때 0이 나온다면 자리수를 뛰어넘은 것
    int d = 0;
    for(int i = 0; (K / pow(10, i)) >= 1; ++i) d++;
    cout << d << endl;

    Calc753Num(N, K, d, usedNum, numCount);

    cout << numCount << endl;
    return 0;
}