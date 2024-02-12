// Header Files
#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


/*
 * 
 */
int busRemaining(const std::vector<std::vector<int>>& busStations) {
    std::vector<std::pair<int, int>> stations;
    for (const auto& station : busStations) {
        stations.emplace_back(station[0], station[1]);
    }

    std::sort(stations.begin(), stations.end());

    int remainingBuses = 1;
    int lastEnd = stations[0].second;

    // Check for overlapping routes
    for (size_t i = 1; i < stations.size(); ++i) {
        if (stations[i].first <= lastEnd) {
            lastEnd = std::max(lastEnd, stations[i].second);
        } else {
            ++remainingBuses;
            lastEnd = stations[i].second;
        }
    }

    // Number of buses remaining after eliminating overlapping routes
    return remainingBuses;
}

int main()
{
    //input for busStation
	int busStation_row;
	int busStation_col;
	cin >> busStation_row;
	cin >> busStation_col;
	
	vector<vector<int> > busStation;
	for ( int idx = 0; idx < busStation_row; idx++ )
	{
		vector<int> temp_vector;
		for ( int jdx = 0; jdx < busStation_col; jdx++ )
		{
			int temp;
			cin >> temp;
			temp_vector.push_back(temp);
		}
		busStation.push_back(temp_vector);
	}
	
	
    int result = busRemaining(busStation);
	cout << result;
	
	
    return 0;
}
