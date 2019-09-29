#include <iostream>
using namespace std;

int main()
{
    bool sorted;
    sorted = true;
    
    int i, num, new_num;
    cin >> num;
    
    i = 1;
    
    cin >> new_num;
    if (new_num == num){
        
    
    if (new_num > num){
        while (new_num != 0){
            i += 1;
            num = new_num;
            if (new_num <= num){
                sorted = false;
            }
            cin >> new_num;
            
            }
            
        }
    }
    
    if (new_num < num){
        while(new_num != 0){
            i += 1;
            num = new_num;
            if (new_num >= num){
                sorted = false;
            }
            cin >> new_num;
        }
        if (sorted == true){
            cout << i << " sorted" << endl;
        }
        if (sorted == false){
            cout << i << " unsorted" << endl;
        }
    }
}
