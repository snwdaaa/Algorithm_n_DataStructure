// 쌍 전체 탐색
// N개의 정수 a0~aN-1, b0~bN-1에서 ai+bi>=K 를 만족하는 ai+bi 값 찾기

#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    unsigned int N;
    int K;

    // 입력
    cout << "N 입력: ";
    cin >> N;
    cout << "K 입력: ";
    cin >> K;

    vector<int> a(N);
    vector<int> b(N);
    cout << "a 배열 입력: ";
    for(int i = 0; i < N; i++)
    {
        cin >> a.at(i);
    }
    cout << "b 배열 입력: ";
    for(int i = 0; i < N; i++)
    {
        cin >> b.at(i);
    }

    // 최솟값 구하기
    int minValue = a.at(0) + b.at(0);   // a0 + b0으로 최솟값 초기화
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int calcValue = a.at(i) + b.at(j);
            if(calcValue >= K)  // K 이상이고
            {
                if(calcValue < minValue)   // 최솟값이면
                {
                    minValue = calcValue;
                }
            }
        }
    }

    cout << "최솟값: " << minValue << endl;

    return 0;
}