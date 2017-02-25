#include "pz.h"

pz::pz()
    :_rules()
{
}

int pz::addObject(const Object& object)
{
    _objects.push_back(object);
    _objects.back().id = _objects.size() - 1;

    return _objects.back().id;
}

int pz::addAttribute(const Attribute& attribute)
{
    for ( const auto& attr: _attributes )
        if ( attr.name == attribute.name && attr.typeId == attribute.typeId )
            return attr.id;

    _attributes.push_back(attribute);
    _attributes.back().id = _attributes.size() - 1;

    return _attributes.back().id;
}

int pz::addAttributeType(const AttributeType& attributeType)
{
    for ( const auto& attr: _attributeTypes )
        if ( attr.type == attributeType.type && attr.u == attributeType.u)
            return attr.id;

    _attributeTypes.push_back(attributeType);
    _attributeTypes.back().id = _attributeTypes.size() - 1;

    return _attributeTypes.back().id;
}

int pz::addRule(const Rule& rule)
{
    _rules.push_back(rule);
    _rules.back().id = _rules.size() - 1;

    return _rules.back().id;
}

const Object& pz::getObject(int objectId) const
{
    return _objects[objectId];
}

int pz::getObjectsCount() const
{
    return _objects.size();
}

const std::vector<Object>& pz::getObjects() const
{
    return _objects;
}

const Attribute& pz::getAttribute(int attributeId) const
{
    return _attributes[attributeId];
}

int pz::getAttributesCount() const
{
    return _attributes.size();
}

const std::vector<Attribute>& pz::getAttributes() const
{
    return _attributes;
}

const AttributeType& pz::getAttributeType(int attributeTypeId) const
{
    return _attributeTypes[attributeTypeId];
}

int pz::getAttributeTypesCount() const
{
    return _attributeTypes.size();
}

const std::vector<AttributeType>& pz::getAttributeTypes() const
{
    return _attributeTypes;
}

const Rule& pz::getRule(int ruleId) const
{
    return _rules[ruleId];
}

int pz::getRulesCount() const
{
    return _rules.size();
}

const std::vector<Rule>& pz::getRules() const
{
    return _rules;
}
