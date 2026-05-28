#include<bits/stdc++.h>
using namespace std;

int suffix(string a, string b)
{
    int i = a.size()-1;
    int j = b.size()-1;

    int cnt = 0;

    while(i >= 0 && j >= 0)
    {
        if(a[i] != b[j])
            break;

        cnt++;
        i--;
        j--;
    }

    return cnt;
}

vector<int> stringIndices(vector<string>& wordsContainer,
                          vector<string>& wordsQuery)
{
    int conSize = wordsContainer.size();
    int qrySize = wordsQuery.size();

    vector<int> ans;

    for(int i=0; i<qrySize; ++i)
    {
        int bestIdx = 0;
        int bestSuffix = -1;

        for(int j=0; j<conSize; ++j)
        {
            int currSuffix =
                suffix(wordsContainer[j], wordsQuery[i]);

            // better suffix mila
            if(currSuffix > bestSuffix)
            {
                bestSuffix = currSuffix;
                bestIdx = j;
            }

            // same suffix length
            else if(currSuffix == bestSuffix)
            {
                // shorter string choose karo
                if(wordsContainer[j].size() <
                   wordsContainer[bestIdx].size())
                {
                    bestIdx = j;
                }
            }
        }

        ans.push_back(bestIdx);
    }

    return ans;
}

int main()
{
    int containerSize;
    int querySize;

    cin >> containerSize >> querySize;

    vector<string> wordContainer(containerSize),
                   wordQuery(querySize);

    for(int i=0; i<containerSize; ++i)
    {
        cin >> wordContainer[i];
    }

    for(int i=0; i<querySize; ++i)
    {
        cin >> wordQuery[i];
    }

    vector<int> ans =
        stringIndices(wordContainer, wordQuery);

    for(auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}