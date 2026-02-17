#include<iostream>
using namespace std;

int main(){

    
    int n;
    cin >> n;

    string team1, team2, name;
    int count1 = 0, count2 = 0;
    bool secondTeamFound = false;

    
    cin >> team1;
    count1 = 1;

    
    for (int i = 1; i < n; i++) {
        cin >> name;

        if (name == team1) {
            count1++;
        } 
        else {
            if (!secondTeamFound) {
                team2 = name;          
                secondTeamFound = true;
            }
            count2++;
        }
    }

    
    if (count1 > count2)
        cout << team1;
    else
        cout << team2;

    return 0;
}

