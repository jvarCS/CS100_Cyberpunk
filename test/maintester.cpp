#include <iostream>
#include "../header/Weapon.h"

int main(){
    Weapon test("testName", "testDescription", 5.0, .25);

    cout << test.Name() << endl;
    cout << test.Description() << endl;
    cout << "Damage: " << test.Damage() << "\nCritical Damage: " << test.CriticalDamage() << endl;
}