#include "pz_converter.h"
#include "pz.h"
#include <fstream>

static std::string getAttributeTypeNameString(AttributeTypeName typeName)
{
    switch (typeName) {
    case AttributeTypeName::SIMBOL:     return "символьный";
    case AttributeTypeName::NUMBER:     return "числовой";
    case AttributeTypeName::FUZZY:      return "нечеткий";
    case AttributeTypeName::LOGIC_EXPR: return "логвыр";
    }
}

pz_converter::pz_converter(pz& p)
    :_pz(p)
{}

void pz_converter::generateIAPZ(const std::string& filename)
{
    std::string result;

    for ( auto object : _pz.getObjects())
    {
        result += "ИМЯ \"";
        result += object.name;
        result += "\"\n";

        if ( object.group != ObjectGroup::NONE )
        {
            result += "ГРУППА \"";
            if ( object.group == ObjectGroup::EVENT )
                result += "Событие";
            else
                result += "Интервал";
            result += "\"\n";
        }

        if ( object.attributeIds.size() > 0 )
        {
            result += "АТТРИБУТЫ\n";
            for ( auto attrId: object.attributeIds )
            {
                const auto& attr = _pz.getAttribute(attrId);
                result += "  ";
                result += attr.name;
                result += ":";
                result += _pz.getAttributeType(attr.typeId).u;
                result += "\n";
            }
        }
        result += "\n";
    }

    std::vector<Rule> rules = _pz.getRules();

    for (auto rule : _pz.getRules())
    {
        result += "ИМЯ \"Правило";
        result += std::to_string(rule.id+1);
        result += "\"\n";

        result += "ТИП \"";
        if (rule.type == RuleType::COMMON)
            result += "обычное";
        else
            result += "периодическое";
        result += "\"\n";

        if ( rule.ins.size() > 0 )
        {
            result += "ЕСЛИ\n";
            for ( int i = 0; i < (int)rule.ins.size(); ++i )
            {
                result += "  ";
                result += rule.ins[i];
                if ( i < (int)rule.ins.size() - 1 )
                    result += " &";
                result += "\n";
            }
        }
        if ( rule.cons.size() > 0 )
        {
            result += "ТО\n";
            for ( int i = 0; i < (int)rule.cons.size(); ++i )
            {
                result += "  ";
                result += rule.cons[i];
                if ( i < (int)rule.cons.size() - 1 )
                    result += " &";
                result += "\n";
            }
        }

        result += "\n";
    }

    std::ofstream file(filename);
    file << result;
}

void pz_converter::generatePZ(const std::string& filename)
{
    std::string result;

    for ( auto object : _pz.getObjects() )
    {
        result += "Обьект (IO:";
        result += std::to_string(object.id + 1);
        result += ", NameO:";
        result += object.name;
        result += ", Group:";
        if ( object.group == ObjectGroup::EVENT )
            result += "событие";
        else if ( object.group == ObjectGroup::INTERVAL )
            result += "интервал";
        else
            result += "отсутствует";
        result += ", L:[";
        const auto& attrIds = object.attributeIds;
        for ( int i = 0; i < (int)attrIds.size(); ++i )
        {
            result += std::to_string(attrIds[i]+ 1);
            if ( i < (int)attrIds.size() - 1)
                result += ", ";
        }
        result += "])";
        result += "\n";
    }
    result += "\n";

    for ( auto attr: _pz.getAttributes() )
    {
        result += "Атрибут(IA:";
        result += std::to_string(attr.id + 1);
        result += ", NameA:";
        result += attr.name;
        result += ", Type:";
        result += std::to_string(attr.typeId);
        result += ")\n";
    }
    result += "\n";

    for ( auto attrType: _pz.getAttributeTypes() )
    {
        result += "Тип (IT:";
        result += std::to_string(attrType.id + 1);
        result += ", NameT:";
        result += getAttributeTypeNameString(attrType.type);
        result += ", U:";
        result += attrType.u;
        result += ")\n";
    }
    result += "\n";

    for ( auto rule: _pz.getRules() )
    {
        result += "Правило (IR:";
        result += std::to_string(rule.id + 1);
        result += ", Ins:[\"";
        const auto& ins = rule.ins;
        for ( int i = 0; i < (int)ins.size(); ++i)
        {
            result += ins[i];
            if ( i < (int)ins.size()-1 )
                result += "\", \"";
        }
        result += "\"], Cons:[\"";
        const auto& cons = rule.cons;
        for ( int i = 0; i < (int)cons.size(); ++i)
        {
            result += cons[i];
            if ( i < (int)cons.size()-1 )
                result += "\", \"";
        }
        result += "\"])\n";
    }
    result += "\n";

    std::ofstream file(filename);
    file << result;
}

