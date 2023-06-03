#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
using namespace std;

bool compareTeams(const pair<string, vector<int>>& team1, const pair<string, vector<int>>& team2){
    const vector<int>& scores1 = team1.second;
    const vector<int>& scores2 = team2.second;
    string name1 = team1.first;
    string name2 = team2.first;

    transform(name1.begin(),name1.end(), name1.begin(), ::tolower);
    transform(name2.begin(),name2.end(),name2.begin(), ::tolower);

    if (scores1[0] != scores2[0]) return scores1[0] > scores2[0];
    if(scores1[4] != scores2[4]) return scores1[4] > scores2[4];
    if(scores1[2]!= scores2[2]) return scores1[2] > scores2[2];

    return name1<name2;
}

int main(){
    int t,g;
    int position = 0;
    map<string,vector<int>> team_scores;
    cin>>t>>g;
    
    for(int i=0;i<t;i++){
        string name;
        cin>>name;
        team_scores[name]={0,0,0,0,0};//score, games, goals, goals concended, goals difference
    }

    for(int i=0;i<g;i++){
        string t1,t2,ignore;
        int p1,p2;
        cin>>t1>>p1>>ignore>>p2>>t2;

        if(p1>p2) team_scores[t1].at(0)+=3;
        else if(p1==p2){team_scores[t1].at(0)++; team_scores[t2].at(0)++;}
        else team_scores[t2].at(0)+=3;

        team_scores[t1].at(1)++;
        team_scores[t2].at(1)++; 
        team_scores[t1].at(2)+=p1;
        team_scores[t2].at(2)+=p2;
        team_scores[t1].at(3)+=p2;
        team_scores[t2].at(3)+=p1;
        team_scores[t1].at(4)=team_scores[t1].at(2)-team_scores[t1].at(3);
        team_scores[t2].at(4)=team_scores[t2].at(2)-team_scores[t2].at(3);
    }

    vector<pair<string,vector<int>>>team_scores_vector(team_scores.begin(),team_scores.end());
    
    sort(team_scores_vector.begin(),team_scores_vector.end(),compareTeams);

    for (const auto& pair : team_scores_vector){
        position++;

        if(pair.first == team_scores_vector[0].first)cout<<setw(3)<<position<<".";
        else if(pair.second[0] == team_scores_vector[position-2].second[0]&& pair.second[4] == team_scores_vector[position-2].second[4]&& pair.second[2] == team_scores_vector[position-2].second[2])cout<<setw(4)<<" ";
        else cout<<setw(3)<<position<<".";

        cout <<setw(16)<<pair.first;
        for (int value : pair.second){
            cout <<setw(4)<<value;
        }

        if(pair.second[1]) cout<<setw(7)<<fixed<<setprecision(2)<<((float)pair.second[0]/(3*(float)pair.second[1]))*100;
        else cout<<setw(7)<<"N/A";
        cout<<endl;
        }

    return 0;
}
