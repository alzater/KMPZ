#include "model.h"
#include "qxmlstream.h"
#include "qfile.h"

Model::Model()
{
}

void Model::addQuestion(string question)
{
    questions.push_back(question);
}

void Model::addAnswer(string answer)
{
    answers.push_back(answer);
}

void Model::addInfo(string key, string value)
{
    infos[key] = value;
}

void Model::addTime(string a, string b, string c, string d, string e, string f)
{
    STime time;
    time.ansStart = a;
    time.ansEnd = b;
    time.ansDuration = c;
    time.questStart = d;
    time.questEnd = e;
    time.questDuration = f;

    times.push_back(time);
}

void Model::genXML()
{
    QFile* file = new QFile("result.xml");
    if (!file->open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QXmlStreamWriter xml(file);
}
