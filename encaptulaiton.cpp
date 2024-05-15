#include <bits/stdc++.h>
using namespace std;

class Book {


    string text;
    string font;
public:
    string getText() {
        return text;
    }

    void setText(string value) {
        this->text = value;
    }

    string getFont() {
        return font;
    }

    void setFont(string value) {
        this->font = value;
    }
};

int main() {
    Book comic;

    
    // comic.text = "Bigg";
    cout << comic.getText() << endl;
    
    comic.setText("bigg");
    cout << comic.getText() << endl;

    return 0;
}
