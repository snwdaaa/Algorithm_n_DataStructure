#include <iostream>

int main(void)
{
    using namespace std;
    unsigned int k, n;
    cin >> k >> n;

    // for문 두 개로 세 개의 배열 전체 탐색
    unsigned int satisfiedCount = 0;
    for(int x = 0; x <= k; ++x)
    {
        for(int y = 0; y <= k; ++y)
        {
            if(0 <= n-(x+y) && n-(x+y) <= k) satisfiedCount++;
        }
    }

    cout << satisfiedCount << endl;
}