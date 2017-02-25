#ifndef PZ_H
#define PZ_H

#include <vector>
#include <string>

enum class AttributeTypeName
{
    SIMBOL,
    NUMBER,
    FUZZY,
    LOGIC_EXPR
};

enum class ObjectGroup
{
    NONE,
    EVENT,
    INTERVAL
};

enum class RuleType
{
    COMMON,
    PERIODICAL
};

struct AttributeType
{
    int id;
    AttributeTypeName type;
    std::string u;
};

struct Attribute
{
   int id;
   std::string name;
   int typeId;
};

struct Object
{
    int id;
    std::string name;
    ObjectGroup group;
    std::vector<int> attributeIds;
};

struct Rule
{
    int id;
    RuleType type;
    std::vector<std::string> ins;
    std::vector<std::string> cons;
};

class pz
{
public:
    pz();

    int addObject(const Object& object);
    int addAttribute(const Attribute& attribute);
    int addAttributeType(const AttributeType& attributeType);
    int addRule(const Rule& rule);

    const Object& getObject(int objectId) const;
    int getObjectsCount() const;
    const std::vector<Object>& getObjects() const;
    const Attribute& getAttribute(int attributeId) const;
    int getAttributesCount() const;
    const std::vector<Attribute>& getAttributes() const;
    const AttributeType& getAttributeType(int attributeTypeId) const;
    int getAttributeTypesCount() const;
    const std::vector<AttributeType>& getAttributeTypes() const;
    const Rule& getRule(int ruleId) const;
    int getRulesCount() const;
    const std::vector<Rule>& getRules() const;

private:
    std::vector<Object> _objects;
    std::vector<Attribute> _attributes;
    std::vector<AttributeType> _attributeTypes;
    std::vector<Rule> _rules;
};

#endif // PZ_H
