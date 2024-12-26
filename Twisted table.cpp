#include <iostream>
using namespace std;
int main(){
int f = 1;
float sum, counter, avg;
sum = avg = counter = 0;

    for(int i = 1; i <= 10; i++){
        
        cout << i << ", Table = ";

        for(int j = 1; j <= 10; j++){
            f = i * j;
            if(f % 2 == 0){
                cout << f << '\t';
                sum += f;
                counter += 1;
            }
            avg = sum / counter;
        }

    cout << "==\tSum - Avg: " << sum << " - " << avg;
    cout << endl << endl;
    sum = avg = counter = 0;
    }

return 0;
}
