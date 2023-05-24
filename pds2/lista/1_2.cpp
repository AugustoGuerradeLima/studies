#include <iostream>
using namespace std;

class ASCIIArt{
    public:
    static void print(string s);
    static void print(char c);
    static void print(int c);
};

void ASCIIArt::print(string s){
        int length = s.length();
        string topBottom = string(length + 4, '-');
        string spaces = string(length + 2, ' ');

        cout << topBottom << endl;
        cout << "| " << spaces << " |" << endl;
        cout << "| " << s << " |" << endl;
        cout << "| " << topBottom.substr(2, length) << "\\/" << topBottom.substr(2, length) << " |" << endl;
        cout << topBottom << endl;
}

void ASCIIArt::print(char c){
    string repeatedChar = string(13, c);
    string spaces = string(13, ' ');

    cout << repeatedChar << endl;
    cout << c << " " << "ASCII ART" << " " << c << endl;
    cout << repeatedChar << "\\/" << repeatedChar << endl;
}

void ASCIIArt::print(int c){
    string stickFigure = "-O--";
        string arms = "/|\\-";
        string legs = "/-\\-";

        for (int i = 0; i < c; i++) {
            cout << stickFigure;
        }
        cout << endl;

        for (int i = 0; i < c; i++) {
            cout << arms;
        }
        cout << endl;

        for (int i = 0; i < c; i++) {
            cout << legs;
        }
        cout << endl;
}

int main(){
    
    ASCIIArt::print("codigo");

    ASCIIArt::print("a");

    ASCIIArt::print(7);



    return(0);
}