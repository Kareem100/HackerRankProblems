/*
Problem Title: Climbing the Leaderboard
Problem URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-climbing-the-leaderboard/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-three

Max Score: 100
Score: 100
Language: C++
Category: One Month Preparation
*/

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    
    vector<int> rightRanks; 
    rightRanks.push_back(INFINITY); int k = 0;
    vector<int> leaderboard;
    
    for (int i = 0; i < ranked.size(); ++i)
        if (ranked[i] != rightRanks[k]) {
            k++;
            rightRanks.push_back(ranked[i]);
        }
    
    for (int i = 0; i < rightRanks.size(); ++i)
        cout << rightRanks[i] << ' ';
    
    for (int i = 0; i < player.size(); ++i) {
        for (int j = k; j >= 0; --j)
            if (player[i] < rightRanks[j]) {
                leaderboard.push_back(j+1);
                k = j;
                break;
            }
            else if (player[i] == rightRanks[j]) {
                leaderboard.push_back(j);
                k = j;
                break;
            }
                
    }
    
    return leaderboard;
}



