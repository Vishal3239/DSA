#include<iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    // int n;
    // cin >> n;

    string word;
    cin>>word;

    // switch (n) {
    //     case 0: word = "zero"; break;
    //     case 1: word = "one"; break;
    //     case 2: word = "two"; break;
    //     case 3: word = "three"; break;
    //     case 4: word = "four"; break;
    //     case 5: word = "five"; break;
    //     case 6: word = "six"; break;
    //     case 7: word = "seven"; break;
    //     case 8: word = "eight"; break;
    //     case 9: word = "nine"; break;
    //     default: word = "number not supported";
    // }

    string cmd =
        "powershell -Command \"Add-Type -AssemblyName System.Speech; "
        "$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; "
        "$speak.Speak('" + word + "')\"";

    system(cmd.c_str());

    return 0;
}