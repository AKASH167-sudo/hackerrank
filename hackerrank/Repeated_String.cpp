#include<iostream>
#include<string>

using namespace std;

long repeatedString(string s, long n)
{
    
    if (s.length() < 1) return 0;

    long count = 0;
    long Len = s.length();

    
    long countInString = 0;

    for (long i = 0; i < Len; i++)
    {
        if (s[i] == 'a') countInString++;
    }

    
    long fullReps = n / Len;
    long remainder = n % Len;

    // The count of 'a's from the full repetitions
    count = fullReps * countInString;

    
    for (long i = 0; i < remainder; i++)
    {
        if (s[i] == 'a') count++;
    }

    return count;
}

int main() {
    string s = "aba";
    long n = 10;
    cout << repeatedString(s, n) << endl;  // Output should be 7
    return 0;
}
