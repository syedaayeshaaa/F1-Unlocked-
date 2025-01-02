#include "Driver.h"
using namespace System::Windows::Forms;
using namespace System;

Driver::Driver(String^ n, String^ c, String^ t, int r, int w, int p)
{
    name = n;
    country = c;
    team = t;
    races = r;
    wins = w;
    podiums = p;
}

void Driver::Display()
{
    MessageBox::Show("Driver: " + name + "\nCountry: " + country +
        "\nTeam: " + team + "\nRaces: " + races +
        "\nWins: " + wins + "\nPodiums: " + podiums);
}
