#include <iostream>
#include <ctime>

int main()
{
    using namespace std;
    cout << "Enter the delay time, in second: ";
    float secs;
    int i = 1;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while(clock() - start < delay){
        if(clock() - start == i*1000000){
            cout << i << endl;
            i++;
        }
    }
        
    cout << "done \a\n";
    return 0;
}
