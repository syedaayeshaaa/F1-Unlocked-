#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

class Driver {                                 // Base class
protected:
    string country;
    int races;
    string name;
    int wins;
    int podiums;
    string team;

public:
    Driver() {                               
        races = 0;
        name = "no name";
        wins = 0;
        podiums = 0;
        team = "none";
        country = "none";
    }

    void setDriver(string n, string c, string t, int r, int w, int p) {  
        name = n;
        country = c;
        team = t;
        races = r;
        wins = w;
        podiums = p;
    }

    void display() const {                    // Career stats 
        cout << "\tDriver Career Stats:" << endl;
        cout << "Driver Name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Team: " << team << endl;
        cout << "Races: " << races << endl;
        cout << "Wins: " << wins << endl;
        cout << "Podiums: " << podiums << endl;
    }
};

class CurrentSeason : public Driver {          
public:
    void setDriver(int r, int w, int p) {     
        races = r;
        wins = w;
        podiums = p;
    }

    void display() const {                     // Current season stats 
        cout << "\n\tStats this season(2024):" << endl;
        cout << "Races: " << races << endl;
        cout << "Wins: " << wins << endl;
        cout << "Podiums: " << podiums << endl;
    }
};

class Schedule {                              // Schedule class
    string season;
public:
    Schedule(string s) {                      
        season = s;
    }

    void schedule_F1() const {                // Race calendar 
        cout << "\tF1 Race Schedule 2024:" << endl;
        cout << "Bahrain GP [March 2, 2024]" << endl;
        cout << "Saudi Arabian GP [March 9, 2024]" << endl;
        cout << "Australian GP [March 24, 2024]" << endl;
        cout << "Japanese GP [April 7, 2024]" << endl; 
        cout << "Emilia Romagna GP [May 19, 2024]" << endl;
        cout << "Monaco GP [May 26, 2024]" << endl;
        cout << "Canadian GP [June 9, 2024]" << endl;
        cout << "Spanish GP [June 23, 2024]" << endl; 
        cout << "British GP [July 7, 2024]" << endl;
        cout << "Hungarian GP [July 21, 2024]" << endl;
        cout << "Belgian Gp [July 28, 2024]" << endl;
        cout << "Dutch GP [August 25, 2024]" << endl;
        cout << "Italian GP [September 1, 2024]" << endl;
        cout << "Azerbaijan GP [September 15, 2024]" << endl;
        cout << "Singapore GP [September 22, 2024]" << endl;
        cout << "Mexico City GP [October 27, 2024]" << endl;
        cout << "Las Vegas GP [November 23, 2024]" << endl;
        cout << "Abu Dhabi GP [December 8, 2024]" << endl; 
    }

    void schedule_sprintRaces() const {       // Sprint races 
        cout << "\tSprint Races 2024" << endl;
        cout << "China [April 20, 2024]" << endl;
        cout << "Miami [May 4, 2024]" << endl;
        cout << "Austria [June 29, 2024]" << endl;
        cout << "Austin [October 19, 2024]" << endl;
        cout << "Brazil [November 2, 2024]" << endl;
        cout << "Qatar [November 30, 2024]" << endl;
    }
};

class Quiz {                                  // Quiz class
public:
    void game() {
        char ch;
        for (int i = 0; i <= 1; i++) {
            cout << "\n\tWelcome to F1 Quiz Challenge" << endl << endl;
            cout << "Q#1) Who has won the most F1 World Championships?" << endl;
            cout << "a. Ayrton Senna\nb. Michael Schumacher\nc. Lewis Hamilton" << endl;
            cin >> ch;

            if (ch == 'b' || 'c') {
                cout << "Correct! Both Michael Schumacher and Lewis Hamilton have 7 championships" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#2) Which team has won the most constructors' championships?" << endl;
            cout << "a. Ferrari\nb. Mercedes\nc. McLaren" << endl;
            cin >> ch;
            if (ch == 'a') {
                cout << "Correct! Ferrari has 16 constructors' titles" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#3) What is the most iconic F1 circuit?" << endl;
            cout << "a. Silverstone\nb. Spa\nc. Monaco" << endl;
            cin >> ch;
            if (ch == 'c') {
                cout << "Correct! Monaco is known as the Crown Jewel of F1" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#4) Who holds the record for most race wins?" << endl;
            cout << "a. Sebastian Vettel\nb. Lewis Hamilton\nc. Max Verstappen" << endl;
            cin >> ch;
            if (ch == 'b') {
                cout << "Correct! Lewis Hamilton has 103 race wins" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#5) Which team dominated F1 in 2024?" << endl;
            cout << "a. McLaren\nb. Ferrari\nc. Red Bull" << endl;
            cin >> ch;
            if (ch == 'a') {
                cout << "Correct! McLaren won the constructors championship! " << endl << endl;
                cout << "\t**CONGRATULATIONS**\nYou've won 2 tickets to the next F1 race! Check your email for details." << endl;
                break;
            }
            else {
                cout << "Incorrect! Better luck next time" << endl;
                break;
            }
        }
    }
};

class Blog {                                  // Blog class
private:                                     
    string opinion;
public:
    Blog(string opp) {                       
        opinion = opp;
    }

    string getOpinion() {                    
        return opinion;
    }
};

int main() {
    system("Color 0B");
    string name;
    char ch;
    char num = 0;
    Schedule S1("2024");
    Quiz q;

    cout << "\t Welcome to F1 Unlocked !" << endl << endl;
    cout << "Enter 1 to check driver stats. \nEnter 2 to view schedule. \nEnter 3 to play quiz game. \nEnter 4 to write blog. " << endl;

    do {
        cout << "\nWhat do you want to do? : ";
        cin >> ch;

        if (ch == '1') {                     // Driver Stats
            cout << "Enter driver's (last) name to search: ";
            cin >> name;

            if (name == "Verstappen") {
                Driver D1;
                D1.setDriver("Max Verstappen", "Netherlands", "Red Bull Racing", 209, 63, 112);
                D1.display();

                cout << "\n________________________________________" << endl;
                CurrentSeason C1;
                C1.setDriver(24, 9, 14);
                C1.display();
            }

            else if (name == "Hamilton") {
                Driver D2;
                D2.setDriver("Lewis Hamilton", "United Kingdom", "Mercedes", 359, 105, 202);
                D2.display();

                CurrentSeason C2;
                C2.setDriver(24, 2, 5);
                C2.display();
            }

            else if (name == "Leclerc") {
                Driver D3;
                D3.setDriver("Charles Leclerc", "Monaco", "Ferrari", 149, 8, 43);
                D3.display();

                CurrentSeason C3;
                C3.setDriver(24, 3, 13);
                C3.display();
            }

            else if (name == "Sainz") {
                Driver D4;
                D4.setDriver("Carlos Sainz", "Spain", "Ferrari", 208, 4, 27);
                D4.display();

                CurrentSeason C4;
                C4.setDriver(24, 2, 9);
                C4.display();
            }

            else if (name == "Alonso") {
                Driver D5;
                D5.setDriver("Fernando Alonso", "Spain", "Aston Martin", 401, 32, 106);
                D5.display();

                CurrentSeason C5;
                C5.setDriver(24, 0, 0);
                C5.display();
            }

            else if (name == "Bottas") {
                Driver D6;
                D6.setDriver("Valteri Bottas", "Finland", "Kick Sauber", 247, 10, 67);
                D6.display();

                CurrentSeason C6;
                C6.setDriver(24, 0, 6);
                C6.display();
            }

            else if (name == "Russell") {
                Driver D7;
                D7.setDriver("George Russell", "United Kingdoms", "Mercedes", 128, 3, 15);
                D7.display();

                CurrentSeason C7;
                C7.setDriver(24, 2, 4);
                C7.display();
            }

            else if (name == "Ocon") {
                Driver D8;
                D8.setDriver("Esteban Ocon", "France", "Alpine", 156, 1, 4);
                D8.display();

                CurrentSeason C8;
                C8.setDriver(24, 0, 1);
                C8.display();
            }

            else if (name == "Gasly") {
                Driver D9;
                D9.setDriver("Pierre Gasly", "France", "Alpine", 154, 1, 5);
                D9.display();

                CurrentSeason C9;
                C9.setDriver(24, 0, 1);
                C9.display();
            }

            else if (name == "Norris") {
                Driver D10;
                D10.setDriver("Lando Norris", "United Kingdoms", "McLaren", 128, 4, 26);
                D10.display();

                CurrentSeason C10;
                C10.setDriver(24, 4, 13);
                C10.display();
            }

            else if (name == "Stroll") {
                Driver D11;
                D11.setDriver("Lance Stroll", "Canada", "Aston Martin", 169, 0, 3);
                D11.display();

                CurrentSeason C11;
                C11.setDriver(24, 0, 0);
                C11.display();
            }

            else if (name == "Magnussen") {
                Driver D12;
                D12.setDriver("Kevin Magnussen", "Denmart", "Haas", 173, 0, 1);
                D12.display();

                CurrentSeason C12;
                C12.setDriver(24, 0, 0);
                C12.display();
            }

            else if (name == "Perez") {
                Driver D13;
                D13.setDriver("Sergio Perez", "Mexico", "Red Bull", 285, 6, 39);
                D13.display();

                CurrentSeason C13;
                C13.setDriver(24, 0, 4);
                C13.display();
            }

            else if (name == "Hulkenberg") {
                Driver D14;
                D14.setDriver("Nico Hulkenberg", "Germany", "Haas", 320, 0, 0);
                D14.display();

                CurrentSeason C14;
                C14.setDriver(24, 0, 0);
                C14.display();
            }

            else if (name == "Albon") {
                Driver D15;
                D15.setDriver("Alexander Albon", "Thailand", "Williams", 106, 0, 2);
                D15.display();

                CurrentSeason C15;
                C15.setDriver(24, 0, 0);
                C15.display();
            }

            else if (name == "Tsunoda") {
                Driver D16;
                D16.setDriver("Yuki Tsunoda", "Japan", "AlphaTauri", 90, 0, 0);
                D16.display();

                CurrentSeason C16;
                C16.setDriver(24, 0, 0);
                C16.display();
            }

            else if (name == "Zhou") {
                Driver D17;
                D17.setDriver("Zhou Guanyu", "China", "Kick Sauber", 68, 0, 0);
                D17.display();

                CurrentSeason C17;
                C17.setDriver(24, 0, 0);
                C17.display();
            }

            else if (name == "Piastri") {
                Driver D18;
                D18.setDriver("Oscar Piastri", "Australia", "McLaren", 46, 2, 10);
                D18.display();

                CurrentSeason C18;
                C18.setDriver(24, 2, 8);
                C18.display();
            }

            else if (name == "Sargeant") {
                Driver D19;
                D19.setDriver("Logan Sargeant", "America", "Williams", 2, 0, 0);
                D19.display();

                CurrentSeason C19;
                C19.setDriver(24, 0, 0);
                C19.display();
            }

            else if (name == "Colapinto") {
                Driver D20;
                D20.setDriver("Franco Colapinto", "Argentina", "Williams", 9, 0, 0);
                D20.display();

                CurrentSeason C20;
                C20.setDriver(24, 0, 0);
                C20.display();
            }

            else if (name == "Ricciardo") {
                Driver D21;
                D21.setDriver("Daniel Ricciardo", "Australia", "RB", 258, 8, 32);
                D21.display();

                CurrentSeason C21;
                C21.setDriver(18, 0, 0);
                C21.display();
            }
        }
        else if (ch == '2') {                // Schedule
            int comp;
            cout << "\tF1 2024 Schedule" << endl;
            cout << "1. Main Races\n2. Sprint Races" << endl;
            cin >> comp;

            Schedule S2(S1);
            if (comp == 1) {
                S1.schedule_F1();
            }
            else if (comp == 2) {
                S2.schedule_sprintRaces();
            }
            else {
                cout << "Invalid! " << endl;
            }
        }
        else if (ch == '3') {                // Quiz
            q.game();
        }
        else if (ch == '4') {                // Blog
            string opinion;
            cout << "\n\t   F1 FANZONE  " << endl << endl;
            cout << "Write your thoughts: ";
            getline(cin >> ws, opinion);

            Blog B(opinion);

            ofstream fout;                    // File handling
            fout.open("f1_opinions.txt", ios::app);
            fout << B.getOpinion() << endl;
            fout.close();

            cout << endl;

            ifstream fin("f1_opinions.txt");
            if (fin.is_open()) {
                while (getline(fin, opinion)) {
                    cout << "Blog posted: " << opinion << endl;
                }
                fin.close();
            }
            else {
                cout << "File is not open" << endl;
            }
        }

        cout << "\nDo you want to close the app(y/n): ";
        cin >> num;
    } while (num != 'y');

    cout << "\n\t************ Thank you for using F1 Unlocked! ************";
    return 0;
}