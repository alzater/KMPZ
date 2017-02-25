#include "model.h"
#include "qxmlstream.h"
#include "qfile.h"
#include "qtreewidget.h"
#include "rapidxml/rapidxml.hpp"

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

static void addEvent(QXmlStreamWriter& xml, const string& event, string& name)
{
    static int qEvent = 1;
    if ( name.empty() )
        name = "Event" + to_string(qEvent++);

    xml.writeStartElement("Event");
    xml.writeAttribute("Name", name.c_str());
      xml.writeStartElement("Formula");
        xml.writeStartElement("EqOp");
        xml.writeAttribute("Value", "eq");
          xml.writeStartElement("Attribute");
          xml.writeAttribute("Value", "Time");
          xml.writeEndElement();

          xml.writeStartElement("String");
          xml.writeAttribute("Value", event.c_str());
          xml.writeEndElement();
        xml.writeEndElement();
      xml.writeEndElement();
    xml.writeEndElement();
}

static void addInterval(QXmlStreamWriter& xml, const string& start, const string& finish)
{
    static int qInterval = 1;

    xml.writeStartElement("Interval");
    xml.writeAttribute("Name", ("Interval" + to_string(qInterval++)).c_str());
      xml.writeStartElement("Open");
        xml.writeStartElement("EqOp");
        xml.writeAttribute("Value", "gt");
          xml.writeStartElement("Attribute");
          xml.writeAttribute("Value", start.c_str());
          xml.writeEndElement();
        xml.writeEndElement();
      xml.writeEndElement();
      xml.writeStartElement("Close");
        xml.writeStartElement("EqOp");
        xml.writeAttribute("Value", "gt");
          xml.writeStartElement("Attribute");
          xml.writeAttribute("Value", finish.c_str());
          xml.writeEndElement();
        xml.writeEndElement();
      xml.writeEndElement();
    xml.writeEndElement();
}

//static void writeItem( QXmlStreamWriter & writer, )

void Model::genXML()
{
    QFile* file = new QFile("result.xml");
    if (!file->open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QXmlStreamWriter xml(file);

    xml.writeStartDocument();
    xml.writeStartElement("IntervalsAndEvents");
    xml.writeAttribute("version", "1.0");
    xml.writeStartElement("Events");
    for ( size_t i = 0; i < times.size(); ++i)
    {
        STime& time = times[i];
        if ( !time.ansStart.empty() )
            addEvent(xml, time.ansStart, time.ansStartName);
        if ( !time.ansEnd.empty() )
            addEvent(xml, time.ansEnd, time.ansEndName);

        if ( !time.questStart.empty() )
            addEvent(xml, time.questStart, time.questStartName );
        if ( !time.questEnd.empty() )
            addEvent(xml, time.questEnd, time.questEndName);
    }
    xml.writeEndElement();
    xml.writeStartElement("Intervals");
    for ( size_t i = 0; i < times.size(); ++i)
    {
        STime& time = times[i];
        if ( !time.ansStartName.empty() && !time.ansEndName.empty() )
            addInterval(xml, time.ansStartName, time.ansEndName);

        if ( !time.questStartName.empty() && !time.questEndName.empty() )
            addInterval(xml, time.questStartName, time.questEndName);
    }
    xml.writeEndElement();
    xml.writeEndElement();

    xml.writeEndDocument();
    file->close();
}
