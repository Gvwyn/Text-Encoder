#include <iostream>
#include <string>
using namespace std;

void Wait()
{
	// whole function for 1 line because I'm cool
	system("pause");
}

int main()
{
	// Define everything
	string Characters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!?_-+=<>()[]{}$%");
	string VerySecret("ikMb4t+Xnl-xKYsr=&o9p*du>_}CPLHTBKRZX]=&OI(0<FS@5eyA!MvS+_sFX]kE.yxA)[_3XaD<;");
	string VerySecretMessage{};
	cout << "Characters to use: a-z, A-Z, 1-9, _, -, +, =, $, %, !, ?, <>, (), [], {}\n";
	cout << "Enter a message to encrypt: ";
	string UserInput{};
	cin >> UserInput;

	// yes
	if (UserInput == "fuckyou") {
		cout << "no u\n";
		Wait();
	}

	else {
		// Real part of the code - Take the input, search for the character(s) pos, then change it
		for (char a : UserInput) {
			size_t position = Characters.find(a);
			if (position != std::string::npos) {
				char x = VerySecret.at(position);
				VerySecretMessage += x;
			}
			else {
				VerySecretMessage += a;
			}
		}
		cout << "Your Input encoded to -> " << VerySecretMessage << "\n";
		Wait();
	}
}