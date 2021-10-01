/*
Problem Title: Waiter
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-waiter/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

int k = 2;
bool prime[50001];
void sieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 50001; p++)
        if (prime[p] == true)
            for (int i = p * p; i <= 50001; i += p)
                prime[i] = false;
}

int getNextPrime() {
    while(true) {
        if (prime[k]) {
            k++;
            return k-1;
        }
        k++;
    }
}

vector<int> waiter(vector<int> number, int q) {
    vector<int> answers;
    stack<int> B;
    sieveOfEratosthenes(number.size());

    while(q--) {
        int nextPrime = getNextPrime();
        vector<int> newNumber;
        
        for (int j = number.size() - 1; j >= 0; --j) {
            if (number[j] % nextPrime == 0)
                B.push(number[j]);
            else
                newNumber.push_back(number[j]);
        }
        
        number = newNumber;
        
        while(!B.empty()) {
            answers.push_back(B.top());
            B.pop();
        }
    }
    
    for (int j = number.size() - 1; j >= 0; --j) 
        answers.push_back(number[j]);

    return answers;
}

