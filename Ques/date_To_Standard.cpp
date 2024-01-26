#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
vector<string> convertToStandardDateFormat(const vector<string> &dates)
{
    const string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    vector<string> formattedDates;
    for (const string &inputDate : dates)
    {
        int day;
        string month;
        int year;
        stringstream ss(inputDate);
        ss >> day;
        ss.ignore(256, ' ');
        ss >> month >> year;
        int monthNumber = 1;
        for (int i = 0; i < 12; ++i)
        {
            if (month == months[i])
            {
                monthNumber = i + 1;
                break;
            }
        }
        string formattedMonth = (monthNumber < 10 ? "0" : "") + to_string(monthNumber);
        string formattedDay = (day < 10 ? "0" : "") + to_string(day);
        string formattedDate = to_string(year) + "-" + formattedMonth + "-" + formattedDay;

        formattedDates.push_back(formattedDate);
    }

    return formattedDates;
}

int main()
{
    using namespace std;

    vector<string> arr = {"6th Jun 1933", "15th Dec 2023", "5th Jan 2023"};

    vector<string> formattedDates = convertToStandardDateFormat(arr);

    for (size_t i = 0; i < formattedDates.size(); ++i)
    {
        cout << "Original: " << arr[i] << "  Formatted: " << formattedDates[i] << endl;
    }

    return 0;
}
