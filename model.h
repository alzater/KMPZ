#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <map>

using namespace std;

struct STime
{
    string ansStart;
    string ansEnd;
    string ansDuration;
    string questStart;
    string questEnd;
    string questDuration;
};

class Model
{
public:
    Model();

public:
    void addQuestion(string question);
    void addAnswer(string answer);
    void addInfo(string key, string value);
    void addTime(string a, string b, string c, string d, string e, string f);
    void genXML();

public:
    vector<string> questions;
    vector<string> answers;
    map<string, string> infos;
    vector<STime> times;
};

#endif // MODEL_H
