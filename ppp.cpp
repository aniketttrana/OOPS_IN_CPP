#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string str = "Aniket@123 is a good boy";
    unordered_map<char, int> umap;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < str.size(); i++)
    {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z')
        {
            umap[c]++;
        }
    }

    for (auto x : umap)
    {
        if (x.first == 'a' || x.first == 'e' || x.first == 'i' || x.first == 'o' || x.first == 'u')
        {
            // count2 += x.second;
            count2++;
        }
        else
        {
            // count1 += x.second;
            count1++;
        }
    }
    cout << "Consonants are " << count1 << endl;
    cout << "Vowels are " << count2;
    return 0;
}
