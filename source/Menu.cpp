//TO MY FELLOW GROUP MATES: IM CRY
//TO MY SWEET, SWEET GARETT GEESINK, SHOULD YOU SEE THIS MESSAGE: IM CRY
#include "../header/Menu.h"

bool Menu::pauseMenu(){
    do {
        cout<<" ________   ___  ________  ___  ___  _________        ________  ___  _________    ___    ___ "<<endl; //this is supposed to say night city btw
        cout<<"|\\   ___  \\|\\  \\|\\   ____\\|\\  \\|\\  \\|\\___   ___\\     |\\   ____\\|\\  \\|\\___   ___\\ |\\  \\  /  /|"<<endl;
        cout<<"\\ \\  \\\\ \\  \\ \\  \\ \\  \\___|\\ \\  \\\\\\  \\|___ \\  \\_|     \\ \\  \\___|\\ \\  \\|___ \\  \\_| \\ \\  \\/  / /"<<endl;
        cout<<" \\ \\  \\\\ \\  \\ \\  \\ \\  \\  __\\ \\   __  \\   \\ \\  \\       \\ \\  \\    \\ \\  \\   \\ \\  \\   \\ \\    / / "<<endl;
        cout<<"  \\ \\  \\\\ \\  \\ \\  \\ \\  \\|\\  \\ \\  \\ \\  \\   \\ \\  \\       \\ \\  \\____\\ \\  \\   \\ \\  \\   \\/  /  /  "<<endl;
        cout<<"   \\ \\__\\\\ \\__\\ \\__\\ \\_______\\ \\__\\ \\__\\   \\ \\__\\       \\ \\_______\\ \\__\\   \\ \\__\\__/  / /   "<<endl;
        cout<<"    \\|__| \\|__|\\|__|\\|_______|\\|__|\\|__|    \\|__|        \\|_______|\\|__|    \\|__|\\___/ /   "<<endl;
        cout<<"                                                                                \\|___|/ "<<endl;
        cout<<"1. Start Game\n";
        cout<<"2. Quit\n";
        cin >> menuInput;
        if (menuInput == '1') return true;
        else if (menuInput == '2') return false;
        else invalidInput();
    } while(menuInput != '1' and menuInput != '2');
    return true;
};
void Menu::invalidInput(){
    cout<< "Invalid input\n";
}
