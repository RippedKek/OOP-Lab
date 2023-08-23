#include <iostream>

using namespace std;

class Counter{
private:
    int count ;
    int increment_step;
public:
    void setIncrementStep(int step_val){
        increment_step = step_val;
    }
    int getCount(){
        return count;
    }
    void increment(){
        count += increment_step;
    }
    void resetCount(){
        count = 0;
    }
    bool isEven(){
        return (!(count%2));
    }
};

int main(){
    Counter counter1;
    counter1.resetCount();
    counter1.setIncrementStep(5);

    counter1.increment();
    counter1.increment();

    cout << "Current count: " << counter1.getCount() << endl;

    counter1.resetCount();

    cout << "After resetting counter: " << counter1.getCount() << endl;

    return 0;
}
