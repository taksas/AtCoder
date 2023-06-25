// AHC021 - A
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.10     -----
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <sstream>

#include <atcoder/all>

#define MAXINT                  2147483647
#define MININT                  -2147483648
#define MAXLL                   9223372036854775807
#define MINLL                   -9223372036854775808
#define INFI                    (INT_MAX / 2)
#define INFL                    (1LL << 60)
#define ll                      long long int
#define ull                     unsigned long long int

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;





int main() {
    vector<vector<int>> B_UID(30,vector<int>(30, -1)); // Tracking each ball
    int uid_count = 0;
    rep(i,30) for(int j = 0; j <= i; j++) B_UID[i][j] = uid_count++;
    //set<int> appeared;
    //map<int,int> mp;
    //vector<vector<pair<int,int>>> temp_list(464);

    vector<pair<int, pair<int,int>>> all_list;

    rep(i,30) for(int j = 0; j <= i; j++) {
        int temp; cin >> temp;
        //appeared.insert(B[i][j]);
        //mp[B[i][j]]++;
        //temp_list[B[i][j]].push_back({i,j});
        all_list.push_back({ temp, {i,j} });
    }
    
    int count = 0;
    vector<pair< pair<int,int> , pair<int,int> >> ans, ans2;
    while(1) {
        bool changed = false;
        for(int i = 30; i >= 1; i--) {
            int start_point = 0; rep(i2,i) start_point += i2;
            for(int j = start_point; j < start_point+i; j++) {

                if(all_list[j].second.second != 0 && all_list[j].first < all_list[j-i].first) {
                    ans.push_back({ all_list[j].second, all_list[j-i].second });
                    int temp = all_list[j].first;
                    all_list[j].first = all_list[j-i].first;
                    all_list[j-i].first = temp;
                    count++;
                    changed = true;
                    if(count == 300000) break; 
                }

                if(all_list[j].second.second != i-1 && all_list[j].first < all_list[j-i+1].first) {
                    ans.push_back({ all_list[j].second, all_list[j-i+1].second });
                    int temp = all_list[j].first;
                    all_list[j].first = all_list[j-i+1].first;
                    all_list[j-i+1].first = temp;
                    count++;
                    changed = true;
                    if(count == 300000) break; 
                }
                
            }
            if(count == 300000) break; 
        }
        if(count == 300000 || changed == false) break; 
    }



    vector<vector<int>> B(30,vector<int>(30, -1)); B = B_UID;
    // Calculate Destination
    rep(i,count) {
        int temp = B_UID[ans[i].first.first][ans[i].first.second];
        B_UID[ans[i].first.first][ans[i].first.second] = B_UID[ans[i].second.first][ans[i].second.second];
        B_UID[ans[i].second.first][ans[i].second.second] = temp;
    }


    int count2 = 0;
    while(1) {
        bool changed = false;
        rep(i,30) {
            for(int j = 0; j <= i; j++) {
                if(B_UID[i][j] != B[i][j]) {

                    changed = true;





                    int idi, idj;  // find ball by uid
                    bool found = false;  
                    rep(i2,30) {  
                        for(int j2 = 0; j2 <= i2; j2++) { 
                            if(B[i2][j2] == B_UID[i][j]) {
                                idi = i2; idj = j2;
                                found = true; break;
                            }
                        }
                        if(found) break;
                    }





                    int handling_i = idi, handling_j = idj;  // Process until it moves to the ideal location
                    bool first_move = true;
                    while(B_UID[i][j] != B[i][j]) {




                        int di, dj;  // calcurate direction

                        if(handling_i < i) di = handling_i+1;
                        else if(handling_i > i) di = handling_i-1;
                        else di = handling_i;

                        if(handling_j < j && handling_i <= i) dj = handling_j+1;
                        else if (handling_j < j && handling_j != handling_i && di == handling_i) dj = handling_j+1;
                        else if(handling_j > j && handling_i >= i) dj = handling_j-1;
                        else if(handling_j > j) dj = handling_j;
                        else dj = handling_j;
                        








                        if(first_move && handling_i == i) {  // handling interruption

                            if(handling_i != 29) {
                                di = handling_i+1;
                                dj = handling_j;
                            } else {
                                di = handling_i-1;
                                if(handling_j == 29) dj = handling_j-1;
                                else dj = handling_j;
                            }



                        } else {


                            if(handling_i == i-1) { // pre-processing
                                if(handling_j < j) {
                                    di--;
                                    if(handling_j != j) dj = handling_j+1;
                                    else di++;
                                } else {
                                    di--;
                                    if(handling_j != j) dj = handling_j-1;
                                    else di++;
                                }
                            }
                            else if(handling_i == i+1) {
                                if(handling_j < j) {
                                    di++;
                                    if(handling_j != j) dj = handling_j+1;
                                    else di--;
                                } else {
                                    di++;
                                    if(handling_j != j) dj = handling_j-1;
                                    else di--;
                                }
                            }
                            else if(handling_j >= handling_i) dj = handling_j-1;
                            



                        }







                        
                        first_move = false;










                        int temp = B[handling_i][handling_j]; // move and memory
                        B[handling_i][handling_j] = B[di][dj];
                        B[di][dj] = temp;
                        count2++;
                        ans2.push_back({ {handling_i,handling_j}, {di,dj} });
                        handling_i = di, handling_j = dj;
                        if(count2 == 10000) break;


                        
                    }




                    if(count2 == 10000) break;

                }
                if(count2 == 10000) break;
            }
            if(count2 == 10000) break;
        }
        if(count2 == 10000 || changed == false) break;
    }

    cout << count2 << endl;
    rep(i,count2) cout << ans2[i].first.first << " " << ans2[i].first.second << " " << ans2[i].second.first << " " << ans2[i].second.second << endl;


    return 0;
    
}

