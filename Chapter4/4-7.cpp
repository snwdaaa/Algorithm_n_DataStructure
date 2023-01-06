// for문으로 피보나치 구현
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    vector<long long> F(50);
    F.at(0) = 0;
    F.at(1) = 1;
    for(int N = 2; N < 50; ++N)
    {
        F.at(N) = F.at(N-1) + F.at(N-2);
        cout << N << " 항째: " << F.at(N) << endl;
    }

    return 0;
}