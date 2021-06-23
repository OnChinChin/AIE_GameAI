#include <iostream>
#include<vector>

bool overTwentyOne(std::vector<char> cards)
{
    int sum = 0;
    bool ace = false;

    for (int i = 0; i < cards.size(); i++)
    {
        if (cards[i] == 'J' || cards[i] == 'K' || cards[i] == 'Q')
        {
            sum += 10;
        }
        else if (cards[i] - '0' >= 2  && cards[i] -'0' <= 10)
        {
            sum += cards[i] - '0';
        }  
        else if (cards[i] == 'A')
        {
            ace = true;
        }
        if (sum > 21)
        {
            return true;
        }
    }
    if (ace)
    {
        if (sum <= 10)
        {
            sum += 11;
        }
        else
        {
            sum++;
        }
    }
    if (sum > 21)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char** argv)
{
    // Test your code
    std::cout << std::boolalpha;
    std::cout << overTwentyOne({ '2', '8', 'j' }) << std::endl;
    std::cout << overTwentyOne({ 'A', 'J', 'K' }) << std::endl;
    std::cout << overTwentyOne({ '5', '5', '3', '9' }) << std::endl;
    std::cout << overTwentyOne({ '2', '6', '4', '4', '5' }) << std::endl;
    std::cout << overTwentyOne({ 'J', 'Q', 'K' }) << std::endl;
    
    
    /*overTwentyOne(['2', '8', 'J']) ? false
        overTwentyOne(['A', 'J', 'K']) ? false
        overTwentyOne(['5', '5', '3', '9']) ? true
        overTwentyOne(['2', '6', '4', '4', '5']) ? false
        overTwentyOne(['J', 'Q', 'K']) ? true*/

   
  



    return 0;
}
