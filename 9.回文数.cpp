#include <iostream>

using namespace std;

class Solution
{
private:
    /* data */
public:
    Solution();
    ~Solution();
    bool isPalindrome(int x);
};

Solution::Solution()
{
}

Solution::~Solution()
{
}

bool Solution::isPalindrome(int x)
{
    int num = x;
    if (x < 0)
        return false;
    else
    {
        long int result = 0;
        int digit = 0;

        while (x > 0)
        {
            digit = x % 10;
            x /= 10;
            result = result * 10 + digit;
        //    cout << "result = " << result << endl;
        }
        if (int(result) == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int x;
    cin >> x;

    Solution sl;
    if (sl.isPalindrome(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    system("pause");
    return 0;
}
