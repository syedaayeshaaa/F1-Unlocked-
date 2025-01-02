
#include <cstdlib>
#include <ctime>
#include <vector>
#include <tuple>
#include <string>
#include <array>
#include <algorithm>

#include "DriverSTats.h"

namespace f1unlocked {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(276, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome To F1 Unlocked";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(222, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 91);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Check Driver Stats";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(492, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 91);
			this->button2->TabIndex = 2;
			this->button2->Text = L"View Schedule";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(492, 287);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 93);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Write Blog";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(222, 289);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 91);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Play Quiz Game";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(846, 482);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Welcome to F1 Unlocked";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DriverStatsForm^ dialog = gcnew DriverStatsForm();
		dialog->ShowDialog();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// F1 Race Schedule
	String^ f1Schedule = "|| F1 Race Schedule 2024: ||\n" +
		"Bahrain GP [March 2, 2024]\n" +
		"Saudi Arabian GP [March 9, 2024]\n" +
		"Australian GP [March 24, 2024]\n" +
		"Japanese GP [April 7, 2024]\n" +
		"Emilia Romagna GP [May 19, 2024]\n" +
		"Monaco GP [May 26, 2024]\n" +
		"Canadian GP [June 9, 2024]\n" +
		"Spanish GP [June 23, 2024]\n" +
		"British GP [July 7, 2024]\n" +
		"Hungarian GP [July 21, 2024]\n" +
		"Belgian GP [July 28, 2024]\n" +
		"Dutch GP [August 25, 2024]\n" +
		"Italian GP [September 1, 2024]\n" +
		"Azerbaijan GP [September 15, 2024]\n" +
		"Singapore GP [September 22, 2024]\n" +
		"Mexico City GP [October 27, 2024]\n" +
		"Las Vegas GP [November 23, 2024]\n" +
		"Abu Dhabi GP [December 8, 2024]\n";

	// Sprint Race Schedule
	String^ sprintSchedule = "|| Sprint Races 2024: ||\n" +
		"China [April 20, 2024]\n" +
		"Miami [May 4, 2024]\n" +
		"Austria [June 29, 2024]\n" +
		"Austin [October 19, 2024]\n" +
		"Brazil [November 2, 2024]\n" +
		"Qatar [November 30, 2024]\n";

	// Combine both schedules
	String^ combinedSchedule = f1Schedule + "\n" + sprintSchedule;

	// Display combined schedule in MessageBox
	MessageBox::Show(combinedSchedule, "2024 F1 Schedules", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


public:


	void startQuiz(System::Windows::Forms::Form^ parentForm) {


		std::vector<std::tuple<std::string, std::array<std::string, 3>, char>> questions = {
			{"Who has won the most F1 World Championships?", std::array<std::string, 3>{"a. Ayrton Senna", "b. Michael Schumacher", "c. Lewis Hamilton"}, 'b'},
			{"Which team has won the most constructors' championships?", std::array<std::string, 3>{"a. Ferrari", "b. Mercedes", "c. McLaren"}, 'a'},
			{"What is the most iconic F1 circuit?", std::array<std::string, 3>{"a. Silverstone", "b. Spa", "c. Monaco"}, 'c'},
			{"Who holds the record for most race wins?", std::array<std::string, 3>{"a. Sebastian Vettel", "b. Lewis Hamilton", "c. Max Verstappen"}, 'b'},
			{"Which team dominated F1 in 2024?", std::array<std::string, 3>{"a. McLaren", "b. Ferrari", "c. Red Bull"}, 'c'},
			{"Which F1 driver is nicknamed 'The Iceman'?", std::array<std::string, 3>{"a. Kimi Räikkönen", "b. Nico Rosberg", "c. Mika Häkkinen"}, 'a'},
			{"What year was the first Formula 1 World Championship held?", std::array<std::string, 3>{"a. 1946", "b. 1950", "c. 1954"}, 'b'},
			{"Which circuit is nicknamed 'The Temple of Speed'?", std::array<std::string, 3>{"a. Monza", "b. Silverstone", "c. Suzuka"}, 'a'},
			{"Who is the youngest ever F1 World Champion?", std::array<std::string, 3>{"a. Lewis Hamilton", "b. Max Verstappen", "c. Sebastian Vettel"}, 'c'},
			{"Which country hosts the Yas Marina Circuit?", std::array<std::string, 3>{"a. Bahrain", "b. United Arab Emirates", "c. Qatar"}, 'b'}
		};


		srand(time(0));
		std::vector<int> usedQuestions;
		char answer;
		int lives = 2;

		while (lives > 0) {
			// Select a random question
			int questionIndex;
			do {
				questionIndex = rand() % questions.size();
			} while (find(usedQuestions.begin(), usedQuestions.end(), questionIndex) != usedQuestions.end());

			usedQuestions.push_back(questionIndex);
			auto& [question, options, correctAnswer] = questions[questionIndex];

			// Construct the question string
			System::String^ questionText = gcnew System::String(question.c_str());
			System::String^ optionsText = gcnew System::String((options[0] + "\n" + options[1] + "\n" + options[2]).c_str());
			System::String^ message = questionText + "\n\n" + optionsText + "\n\nSelect your answer (a/b/c):";

			// Show the question in a MessageBox
			System::String^ response = Interaction::InputBox(message, "F1 Quiz", "");

			if (response->Length == 0) {
				MessageBox::Show(parentForm, "You exited the quiz.", "Quiz Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check the answer
			char userAnswer = response[0];
			if (userAnswer == correctAnswer) {
				MessageBox::Show(parentForm, "Correct!", "Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				--lives;
				if (lives > 0) {
					MessageBox::Show(parentForm, "Incorrect! Try again.", "Result", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				else {
					MessageBox::Show(parentForm, "Incorrect! No lives left. Quiz over.", "Result", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	startQuiz(this);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Prompt user for their thoughts
	System::String^ title = "F1 FANZONE";
	System::String^ prompt = "Write your thoughts:";
	System::String^ userOpinion = Interaction::InputBox(prompt, title, "");

	// If user cancels or doesn't write anything, exit the method
	if (String::IsNullOrWhiteSpace(userOpinion)) {
		MessageBox::Show("No blog entry written.", "Blog Not Created", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// Confirm and show the blog content
	System::String^ message = "Here is your blog content:\n\n" + userOpinion + "\n\nDo you want to save this blog?";
	System::Windows::Forms::DialogResult result = MessageBox::Show(message, "Review Blog", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	// If user chooses not to save
	if (result == System::Windows::Forms::DialogResult::No) {
		MessageBox::Show("Blog not saved.", "Cancelled", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// Save the blog to a .txt file
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Text Files (*.txt)|*.txt";
	saveFileDialog->Title = "Save Blog";
	saveFileDialog->FileName = "F1_Blog.txt";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			System::IO::File::WriteAllText(saveFileDialog->FileName, userOpinion);
			MessageBox::Show("Blog saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while saving the blog: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Save operation cancelled.", "Cancelled", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

};
}