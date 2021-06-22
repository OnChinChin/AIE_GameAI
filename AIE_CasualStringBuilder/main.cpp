#include <iostream>
#include <string>

std::string stringBuilder(std::string word)
{
    int count = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] || (word[i] + 1) == '[')
        {
            count++;
        }
        else if (word[i] == ']')
        {
            count--;
        }

    }
}

int main(int argc, char** argv)
{
    std::cout << stringBuilder("3[a]2[bc]") << std::endl;
    std::cout << stringBuilder("3[a2[c]]") << std::endl;
    std::cout << stringBuilder("2[abc]3[cd]ef") << std::endl;
    return 0;
}