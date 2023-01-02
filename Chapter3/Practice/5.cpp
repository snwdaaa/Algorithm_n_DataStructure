// N개의 양의 정수, N개의 정수가 모두 짝수라면 2로 나눈 값으로 치환하는 작업 못 할 때까지 반복
// 몇 번 해야 함?

#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    unsigned int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a.at(i);

    // N개의 정수가 모두 짝수인지 확인
    bool isOddExist = 0;  // 홀수가 하나라도 존재하는가?
    for(int i = 0; i < N; ++i)
    {
        // 모두 짝수라면 isAllEven이 0
        // 홀수가 하나라도 있으면 isAllEven이 0이 아닌 다른 값
        isOddExist += (a.at(i) % 2);
    }

    // 모두 짝수일 때, 2로 더 이상 나눌 수 없을 때까지 횟수 세어가면서 반복
    unsigned int repeatCount = 0;   // 작업 반복 횟수
    if(isOddExist == false)
    {
        isOddExist = 0;
        while(true)
        {
            // 홀수가 있는지 확인하기 -> 홀수가 있다면 break
            for(int i = 0; i < N; ++i) isOddExist += (a.at(i) % 2);
            if(isOddExist) 
                break;
            else
            {
                for(int i = 0; i < N; ++i) a.at(i) /= 2;
                repeatCount++;
            }
        }
    }

    cout << repeatCount << endl;

    return 0;
}