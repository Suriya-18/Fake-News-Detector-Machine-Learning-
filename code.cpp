#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<string> fakeWords = {"clickbait", "rumor", "conspiracy", "scam"};

bool isFakeNews(string article) {
    for (string word : fakeWords) {
        if (article.find(word) != string::npos) return true;
    }
    return false;
}

int main() {
    string article;
    cout << "Enter news article text: ";
    getline(cin, article);

    if (isFakeNews(article)) cout << "Warning! This news might be fake. ⚠️\n";
    else cout << "This news looks real. ✅\n";

    return 0;
}
