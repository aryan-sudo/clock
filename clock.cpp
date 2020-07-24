#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t curr_time;
	curr_time = time(NULL);

	tm *tm_local = localtime(&curr_time);
	cout << "The time is now : " << tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec;
	system("PAUSE");
	return 0;
}
