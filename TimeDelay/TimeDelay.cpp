#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

void TimeDelay(int time);

int main()
{
    TimeDelay(10);
}

void TimeDelay(int time)
{
    sleep_for(nanoseconds(time));
    sleep_until(system_clock::now() + seconds(1));
}