#include <bits/stdc++.h>
using namespace std;

int main()
{
  string word = "abcd";
  int weights[] = {5, 3, 12, 14, 1, 2, 3, 2, 10, 6, 6, 9, 7, 8, 7, 10, 8, 9, 6, 9, 9, 8, 3, 7, 7, 2};
  unordered_map<char, int> mp;
  for (int i = 0; i < 26; i++)
  {
    mp['a' + i] = i;
  }
  // for(auto x:mp){
  //   cout<<x.first<<"->"<<x.second<<endl;
  // }
  int sum=0;
  for (char ch : word)
  {

    sum += weights[mp[ch]];
  }
  int num = (sum % 26);
  cout<<num;
   char abc= 'a' + (25 - num);
   cout<<abc;
  return 0;
}