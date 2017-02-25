#ifndef PZ_CONVERTER_H
#define PZ_CONVERTER_H

#include <string>

class pz;
class pz_converter
{
public:
    pz_converter(pz& p);
    void generateIAPZ(const std::string& filename);
    void generatePZ(const std::string& filename);

private:
    pz& _pz;
};

#endif // PZ_CONVERTER_H
