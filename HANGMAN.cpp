#include<iostream>
using namespace std;
int main()
{
	char ar[7] = "orange";
	char ans[8] = { "__ " };
	int tries = 5;
	char  guess;
	cout << "\t\t\t\t\t|------------------|" << endl;
	cout << "\t\t\t\t\t|Hangman: The Game |" << endl;
	cout << "\t\t\t\t\t|------------------|" << endl;
	cout << "\n\n";
	cout << "Instructions:\n";
	cout << "* Save your friend from being hanged by guessing the letters in the CODEWORD.\n* You have 5 tries to guess the word\n";
	cout << " ____\n";
	cout << " |         {          \n";
	cout << " |         O          \n";
	cout << " |         |          \n";
	cout << " |       / | \\       \n";
	cout << " |      /  |  \\      \n";
	cout << " |        / \\        \n";
	cout << " |       /   \\       \n";
	cout << " |                    \n";
	cout << " |\n";
	cout << "\n\Hint: It's a FRUIT name: \n\n";
	cout << "\t\t" << ans << endl;
	int i = 0;
reset:
	while (tries > 0)
	{
		cout << "\nYou have " << tries << " Tries Left\n\n";
		cout << "Guess a Letter:\n\n";
		cin >> guess;
		while (ar[i] != '\0')
		{
			if (ar[i] == guess)
			{
				cout << "Congradulation ' " << guess << " ' is one of the letters" << endl;
				ans[i] = guess;
				cout << "\n\t\t" << ans << endl;
				goto win;
			}
			else if (ar[i + 1] == guess)
			{
				cout << "Congradulation ' " << guess << " ' is one of the letters" << endl;
				ans[i + 1] = guess;
				cout << "\n\t\t" << ans << endl;
				goto win;
			}
			else if (ar[i + 2] == guess)
			{
				cout << "Congradulation ' " << guess << " ' is one of the letters" << endl;
				ans[i + 2] = guess;
				cout << "\n\t\t" << ans << endl;
				goto win;
			}
			else if (ar[i + 3] == guess)
			{
				cout << "Congradulation ' " << guess << " ' is one of the letters" << endl;
				ans[i + 3] = guess;
				cout << "\n\t\t" << ans << endl;
				goto win;
			}
			else if (ar[i + 4] == guess)
			{
				cout << "Congradulation ' " << guess << " ' is one of the letters" << endl;
				ans[i + 4] = guess;
				cout << "\n\t\t" << ans << endl;
				goto win;
			}
			else if (ar[i + 5] == guess)
			{
				cout << "Congradulation ' " << guess << " ' is one of the letters" << endl;
				ans[i + 5] = guess;
				cout << "\n\t\t" << ans << endl;
				goto win;
			}
			else if (ar[i + 6] == guess)
			{
				cout << "Congradulation ' " << guess << " ' is one of the letters" << endl;
				ans[i + 6] = guess;
				cout << "\n\t\t" << ans << endl;
				goto win;
			}
			else {
				cout << "\tWrong guess\n" << endl;
				switch (tries)
				{
				case 5:
					cout << " ____\n";
					cout << " |         {         \n";
					cout << " |         O         \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |_\n";
					tries--;
					break;
				case 4:
					cout << " ____\n";
					cout << " |         {         \n";
					cout << " |         O         \n";
					cout << " |         |         \n";
					cout << " |         |         \n";
					cout << " |         |         \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |_\n";
					tries--;
					break;
				case 3:
					cout << " ____\n";
					cout << " |         {         \n";
					cout << " |         O         \n";
					cout << " |         |         \n";
					cout << " |       / |         \n";
					cout << " |      /  |         \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |_\n";
					tries--;
					break;
				case 2:
					cout << " ____\n";
					cout << " |         {         \n";
					cout << " |         O         \n";
					cout << " |         |         \n";
					cout << " |       / | \\      \n";
					cout << " |      /  |  \\     \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |                   \n";
					cout << " |_\n";
					tries--;
					break;
				case 1:
					cout << " ____\n";
					cout << " |         {         \n";
					cout << " |         O         \n";
					cout << " |         |         \n";
					cout << " |       / | \\      \n";
					cout << " |      /  |  \\     \n";
					cout << " |        / \\       \n";
					cout << " |       /   \\      \n";
					cout << " |                   \n";
					cout << " |_\n";
					tries--;
					break;
				}
				goto win;
			}
		}
	}
win:
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		if (ar[i] == ans[i])
		{
			count++;
		}
	}
	if (count == 6)
	{
		cout << "\t\t!!!CONGRADULATIONS YOU GUESSED THE CORRECT WORD\t";
	}
	else {
		goto reset;
	}
	system("pause");
	return 0;

}