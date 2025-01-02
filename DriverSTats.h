#pragma once

#include <vector>
#include <string>

namespace f1unlocked {
    using namespace System;
    using namespace System::Windows::Forms;

    public ref class DriverStatsForm : public System::Windows::Forms::Form
    {
    public:
        DriverStatsForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~DriverStatsForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ labelDriverStats;
    private: System::Windows::Forms::RichTextBox^ driverStats;
    private: System::Windows::Forms::ComboBox^ drivers;

    private: System::ComponentModel::Container^ components;

           void InitializeComponent(void)
           {
               this->labelDriverStats = (gcnew System::Windows::Forms::Label());
               this->driverStats = (gcnew System::Windows::Forms::RichTextBox());
               this->drivers = (gcnew System::Windows::Forms::ComboBox());
               this->SuspendLayout();
               // 
               // labelDriverStats
               // 
               this->labelDriverStats->AutoSize = true;
               this->labelDriverStats->Location = System::Drawing::Point(261, 86);
               this->labelDriverStats->Name = L"labelDriverStats";
               this->labelDriverStats->Size = System::Drawing::Size(109, 16);
               this->labelDriverStats->TabIndex = 0;
               this->labelDriverStats->Text = L"Driver Stats Here";
               // 
               // driverStats
               // 
               this->driverStats->Location = System::Drawing::Point(183, 160);
               this->driverStats->Name = L"driverStats";
               this->driverStats->ReadOnly = true;
               this->driverStats->Size = System::Drawing::Size(264, 154);
               this->driverStats->TabIndex = 1;
               this->driverStats->Text = L"";
               // 
               // drivers
               // 
               this->drivers->FormattingEnabled = true;
               this->drivers->Location = System::Drawing::Point(255, 116);
               this->drivers->Name = L"drivers";
               this->drivers->Size = System::Drawing::Size(121, 24);
               this->drivers->TabIndex = 2;
               this->drivers->SelectedIndexChanged += gcnew System::EventHandler(this, &DriverStatsForm::drivers_SelectedIndexChanged);
               // 
               // DriverStatsForm
               // 
               this->ClientSize = System::Drawing::Size(630, 396);
               this->Controls->Add(this->drivers);
               this->Controls->Add(this->driverStats);
               this->Controls->Add(this->labelDriverStats);
               this->Name = L"DriverStatsForm";
               this->Text = L"Driver Stats";
               this->Load += gcnew System::EventHandler(this, &DriverStatsForm::DriverStatsForm_Load);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
    private: System::Void DriverStatsForm_Load(System::Object^ sender, System::EventArgs^ e) {
        // Vector of drivers
        std::vector<std::string> drivers = {
            "Max Verstappen", "Lewis Hamilton", "Charles Leclerc", "Carlos Sainz",
            "Fernando Alonso", "Valtteri Bottas", "George Russell", "Esteban Ocon",
            "Pierre Gasly", "Lando Norris", "Lance Stroll", "Kevin Magnussen",
            "Sergio Perez", "Nico Hulkenberg", "Alexander Albon", "Yuki Tsunoda",
            "Zhou Guanyu", "Oscar Piastri", "Logan Sargeant", "Franco Colapinto",
            "Daniel Ricciardo", "Liam Lawson"
            // Add other drivers here
        };

        // Populate the ComboBox
        for (const std::string& driver : drivers) {
            this->drivers->Items->Add(gcnew System::String(driver.c_str()));
        }
    }

    private: System::Void drivers_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        // Get the selected driver's index
        int selectedIndex = this->drivers->SelectedIndex;

        // Define the stats for each driver
        std::vector<std::tuple<std::string, std::string, std::string, int, int, int>> driverStats = {
            {"Max Verstappen", "Netherlands", "Red Bull Racing", 209, 63, 112},
            {"Lewis Hamilton", "United Kingdom", "Mercedes", 359, 105, 202},
            {"Charles Leclerc", "Monaco", "Ferrari", 149, 8, 43},
            {"Carlos Sainz", "Spain", "Ferrari", 208, 4, 27},
            {"Fernando Alonso", "Spain", "Aston Martin", 401, 32, 106},
            {"Valtteri Bottas", "Finland", "Kick Sauber", 247, 10, 67},
            {"George Russell", "United Kingdom", "Mercedes", 128, 3, 15},
            {"Esteban Ocon", "France", "Alpine", 156, 1, 4},
            {"Pierre Gasly", "France", "Alpine", 154, 1, 5},
            {"Lando Norris", "United Kingdom", "McLaren", 128, 4, 26},
            {"Lance Stroll", "Canada", "Aston Martin", 169, 0, 3},
            {"Kevin Magnussen", "Denmark", "Haas", 173, 0, 1},
            {"Sergio Perez", "Mexico", "Red Bull", 285, 6, 39},
            {"Nico Hulkenberg", "Germany", "Haas", 320, 0, 0},
            {"Alexander Albon", "Thailand", "Williams", 106, 0, 2},
            {"Yuki Tsunoda", "Japan", "RB", 90, 0, 0},
            {"Zhou Guanyu", "China", "Kick Sauber", 68, 0, 0},
            {"Oscar Piastri", "Australia", "McLaren", 46, 2, 10},
            {"Logan Sargeant", "USA", "Williams", 41, 0, 0},
            {"Franco Colapinto", "Argentina", "Williams", 9, 0, 0},
            {"Daniel Ricciardo", "Australia", "RB", 258, 8, 32},
            {"Liam Lawson", "New Zealand", "RB", 11, 0, 0},
        };

        std::vector<std::tuple<int, int, int>> currentSeasonStats = {
            {24, 9, 14}, {24, 2, 5}, {24, 3, 13}, {24, 2, 9}, {24, 0, 0},
            {24, 0, 6}, {24, 2, 4}, {24, 0, 1}, {24, 0, 1}, {24, 4, 13},
            {24, 0, 0}, {24, 0, 0}, {24, 0, 4}, {24, 0, 0}, {24, 0, 0},
            {24, 0, 0}, {24, 0, 0}, {24, 2, 8}, {14, 0, 0}, {9, 0, 0},
            {18, 0, 0}, {6, 0, 0}
        };

        // Get the driver's stats
        auto [name, country, team, totalRaces, wins, podiums] = driverStats[selectedIndex];
        auto [seasonRaces, seasonWins, seasonPodiums] = currentSeasonStats[selectedIndex];

        // Format the stats
        std::string stats = "Name: " + name + "\n" +
            "Country: " + country + "\n" +
            "Team: " + team + "\n" +
            "Total Races: " + std::to_string(totalRaces) + "\n" +
            "Wins: " + std::to_string(wins) + "\n" +
            "Podiums: " + std::to_string(podiums) + "\n\n" +
            "Current Season Stats:\n" +
            "Races: " + std::to_string(seasonRaces) + "\n" +
            "Wins: " + std::to_string(seasonWins) + "\n" +
            "Podiums: " + std::to_string(seasonPodiums);

        // Display the stats in the RichTextBox
        this->driverStats->Text = gcnew System::String(stats.c_str());
    }

    };
}