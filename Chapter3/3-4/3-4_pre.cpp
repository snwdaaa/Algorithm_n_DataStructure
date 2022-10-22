// 쌍 전체 탐색
// N개의 정수 a0~aN-1, b0~bN-1에서 ai+bi>=K 를 만족하는 ai+bi 값 찾기

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 값 입력
    int N, K;
    cin >> N;
    cin >> K;
    vector<int> aVec(N);
    vector<int> bVec(N);
    for(int i = 0; i < N; i++) cin >> aVec[i];
    for(int i = 0; i < N; i++) cin >> bVec[i];

    // ai+bi>=K 만족하는 ai+bi의 최솟값 찾기
    int min_result = aVec[0] + bVec[0]; // 최솟값
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(K <= aVec[i] + bVec[j]) // 두 수의 합이 K 이상이고
            {
                if(min_result > aVec[i] + bVec[j]) // 최솟값일 때
                {
                    min_result = aVec[i] + bVec[j];
                }
            }
        }
    }

    // 결과 출력
    cout << min_result << endl;
}