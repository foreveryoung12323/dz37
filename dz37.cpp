#include "queue.h"
#include "ingredient.h"
#include <queue>
#include <iostream>
using namespace std;

int main() {
    //task 1
    //Queue<string> stringQueue;
    //stringQueue.push("one");
    //stringQueue.push("two");
    //stringQueue.push("three");
    //stringQueue.push("four");
    //stringQueue.push("five");
    //stringQueue.push("six");

    //cout << "Initial queue: ";
    //stringQueue.show();

    //stringQueue.pop();
    //stringQueue.pop();

    //stringQueue.push("seven");

    //cout << "Modified queue: ";
    //stringQueue.show();


    //int count = 0;
    //for (const auto& str : { "one", "two", "three", "four", "five", "six", "seven" }) {
    //    if (!str.empty() && (str[0] == 'f' || str[0] == 't')) {
    //        ++count;
    //    }
    //}
    //cout << "Strings starting with 'f' or 't': " << count << endl;

        //task 2
    priority_queue<Ingredient> kitchenQueue;
    kitchenQueue.push(Ingredient("Potatoes", 15));
    kitchenQueue.push(Ingredient("Carrots", 10));
    kitchenQueue.push(Ingredient("Meat", 25));
    kitchenQueue.push(Ingredient("Onions", 5));

    cout << "Cooking process:\\n";
    while (!kitchenQueue.empty()) {
        Ingredient current = kitchenQueue.top();
        kitchenQueue.pop();
        cout << "Cooking " << current.name << " (" << current.cookTime << " minutes)\\n";
    }

    return 0;
}
