//1. Number Manipulation and Prime Numbers
#include <iostream>
#include <vector>
using namespace std;
/*
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

vector<int> findFactors(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) factors.push_back(i);
    }
    return factors;
}

int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) next++;
    return next;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number.\n";
        cout << "Next prime: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number.\n";
        cout << "Factors: ";
        vector<int> factors = findFactors(n);
        for (int f : factors) cout << f << " ";
        cout << endl;
    }
    return 0;
}




//2. Array Operations

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Reverse the array
    reverse(arr.begin(), arr.end());
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Find second largest and second smallest
    sort(arr.begin(), arr.end());
    cout << "Second smallest: " << arr[1] << endl;
    cout << "Second largest: " << arr[n - 2] << endl;

    return 0;
}


---

3. String Manipulation

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

// Function to check if a string is a palindrome
int isPalindrome(string s) {
    string cleaned = "", rev;
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') cleaned += c;
    }
    rev = cleaned;
    reverse(rev.begin(), rev.end());
    return (cleaned == rev);
}

// Function to count character frequency
void countFrequency(string s) {
    map<char, int> freq;
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') freq[c]++;
    }
    cout << "Character frequencies:\n";
    for (auto p : freq) {
        cout << p.first << ": " << p.second << endl;
    }
}

// Function to replace vowels with '*'
string replaceVowels(string s) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < s.length(); i++) {
        if (vowels.find(s[i]) != string::npos) s[i] = '*';
    }
    return s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Palindrome check: ";
    if (isPalindrome(s)) cout << "Yes\n";
    else cout << "No\n";

    countFrequency(s);

    cout << "String after replacing vowels: " << replaceVowels(s) << endl;

    return 0;
}


---

4. Spiral Number Pattern

#include <iostream>
using namespace std;

void printSpiral(int n) {
    int arr[n][n], top = 0, bottom = n - 1, left = 0, right = n - 1, num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) arr[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++) arr[i][right] = num++;
        right--;

        for (int i = right; i >= left; i--) arr[bottom][i] = num++;
        bottom--;

        for (int i = bottom; i >= top; i--) arr[i][left] = num++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    printSpiral(n);
    return 0;
}


---

5. Rotate Matrix 90 Degrees Clockwise

#include <iostream>
using namespace std;

void rotateMatrix(int n, int arr[][100]) {
    int rotated[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - i - 1] = arr[i][j];
        }
    }

    cout << "Rotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    
    int arr[100][100];
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    rotateMatrix(n, arr);
    return 0;
}*/


