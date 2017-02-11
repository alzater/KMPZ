#include "mainwindow.h"
#include <QApplication>
#include <dialog.h>

#include "pz.h"
#include "pz_converter.h"
#include <iostream>
#include <vector>
#include <regex>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    pz p;
    p.addObject({0, "Пациент", ObjectGroup::NONE, {0,1,2}});
    p.addAttribute({0, "TeмператураКол", 0});
    p.addAttribute({1, "TeмператураКaч", 1});
    p.addAttribute({2, "Рвота", 2});
    p.addAttributeType({0, AttributeTypeName::NUMBER, "0.0-100.0"});
    p.addAttributeType({1, AttributeTypeName::SIMBOL, "{\"Высокая\", \"Повышенная\", \"Нормальная\", \"Пониженная\"}"});
    p.addAttributeType({2, AttributeTypeName::SIMBOL, "{\"Да\", \"Нет\"}"});

    p.addObject({1, "Высокая_температура", ObjectGroup::INTERVAL, {3,4,5,6,7}});
    p.addAttribute({3, "УслНач", 3});
    p.addAttribute({4, "УслОконч", 4});
    p.addAttribute({5, "Продолжительность", 5});
    p.addAttribute({6, "Количество возникновений", 5});
    p.addAttribute({7, "Активность", 5});
    p.addAttributeType({3, AttributeTypeName::LOGIC_EXPR, "Пациент.ТемператураКач = \"Высокая\""});
    p.addAttributeType({4, AttributeTypeName::LOGIC_EXPR, "~( Пациент.ТемператураКач = \"Высокая\" )"});
    p.addAttributeType({5, AttributeTypeName::NUMBER, "MinInt-MaxInt"});

    p.addObject({2, "В_Течение_Дня", ObjectGroup::INTERVAL, {8,9,5,6,7}});
    p.addAttribute({8, "УслНач", 6});
    p.addAttribute({9, "УслОконч", 7});
    p.addAttributeType({6, AttributeTypeName::LOGIC_EXPR, "Время = \"12:00\""});
    p.addAttributeType({7, AttributeTypeName::LOGIC_EXPR, "Время = \"18:00\""});

    p.addRule({0, RuleType::COMMON, {
            "Высокая_Температура.Продолжительность > Время(6:00)",
            "Пациент.Рвота = \"Да\""
        },{
            "Диагноз = \"инфекционное заболевание\""
        }});

    p.addRule({1, RuleType::COMMON, {
            "Высокая_Температура.Продолжительность > Время(6:00)",
            "Пациент.Рвота = \"Нет\""
        },{
            "Диагноз = \"срочная госпитализация\""
        }});

    p.addRule({2, RuleType::COMMON, {
            "Пациент.ТемператураКол > 39.0",
        },{
            "Пациент.ТемператураКач = \"Высокая\""
        }});

    pz_converter conv(p);
    conv.generateIAPZ("ЯПЗ.ЯПЗ");
    conv.generatePZ("ПЗ.ПЗ");

std::vector<std::regex>exp({
    std::regex("в [0-9]{1,2} час(а,у)"),
    std::regex("[1-9]{1,2} июня"),
    std::regex("[0-9]{1,2} июля"),
    std::regex("[0-9]{1,2} августа"),
    std::regex("сегодня"),
    std::regex("завтра"),
    }
  );

    std::cout << "-----------ЭКСПЕРИМЕНТ СО СЛОВАРЕМ-----------\n";

    for ( auto e:exp )
    {
        std::string s ("Очень хорошая погода сегодня. 12 июня в 4 часа в Москве проходил праздник, посвященный Конституции Российской федерации.");
        std::smatch m;
        while (std::regex_search (s,m,e)) {
            for (auto x:m) std::cout << x << " ";

            std::cout << std::endl;
            s = m.suffix().str();
        }
    }
    std::cout << "-----------КОНЕЦ-----------" << std::endl;

    return a.exec();
}
