#include <iostream>

int main(int ac, char **av)
{
    using namespace std;
    char charr1[20] = {};
    char t = '\0';

    if(ac < 2){
        cout << "eg: " << av[0] << "  <input info>" << endl;
        return 1;
    }
    t = av[1][0];

    if((t >= 'a' && t <= 'z')||(t >= 'A' && t <= 'Z')){
        cout << t << " is alpha"  << endl;
    }else if(t >= '0' && t <= '9'){
        cout << t <<" is num " << endl;
    }else{
        cout << "is specal char" << endl;
    }

    return 0;
}
