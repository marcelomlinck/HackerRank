// Solution to the challenge: https://www.hackerrank.com/challenges/playing-with-numbers/problem
// This solution overcame all the testcases

#include <bits/stdc++.h>
#include <vector>
#include <numeric>
#include <iterator>
#include <cmath>
#include <cstdlib>

using namespace std;

vector<string> split_string(string);

// Complete the playingWithNumbers function below.
vector<long> playingWithNumbers(vector<int>& inputVec, vector<int>& queryVec) {
    
    vector<long> resultVec;

    std::sort(inputVec.begin(), inputVec.end());

    const auto totalSize = inputVec.size();

    std::vector<long> prefixSumVec(totalSize);
    std::partial_sum(inputVec.begin(), inputVec.end(), prefixSumVec.begin());

    long sum = 0;
    for(auto query : queryVec)
    {
        sum += query;
        
        auto lowerBound = std::lower_bound(inputVec.begin(), inputVec.end(), -1*sum);
        auto lowerBoundIndex = std::distance(inputVec.begin(), lowerBound);

        long queryResult = 0;
        if(lowerBoundIndex > 0) 
        {
            queryResult = std::abs((long)(prefixSumVec[lowerBoundIndex-1] + lowerBoundIndex * sum)) + (prefixSumVec[totalSize-1] - prefixSumVec[lowerBoundIndex-1]) + (totalSize - lowerBoundIndex) * sum;
        }
        else
        {
            queryResult = std::abs((long)(prefixSumVec[totalSize-1] + totalSize * sum));
        }

        resultVec.push_back(queryResult);
    }

    return resultVec;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string queries_temp_temp;
    getline(cin, queries_temp_temp);

    vector<string> queries_temp = split_string(queries_temp_temp);

    vector<int> queries(q);

    for (int i = 0; i < q; i++) {
        int queries_item = stoi(queries_temp[i]);

        queries[i] = queries_item;
    }

    auto result = playingWithNumbers(arr, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
