#ifndef VOTER_H
#define VOTER_H

#include "Person.h"

class Voter : public Person
{
    friend std::istream& operator>>(std::istream&, Voter&);
    friend std::ostream& operator<<(std::ostream&, Voter&);
private:
    std::string m_partyAffiliation;
public:
    Voter() = default;
    Voter(char*, int, const std::string&, const std::string&);
    Voter(const Voter &v);
    void setPartyAffiliation(std::string);
    std::string getPartyAffiliation();
};


#endif // VOTER_H
