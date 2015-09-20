#include "voter.h"

std::istream& operator>>(std::istream &is, Voter &iVoter)
{
    //

    return is;
}

std::ostream& operator<<(std::ostream &os, Voter &oVoter)
{
    os <<   "Name: " << oVoter.getName() << std::endl <<
            "Age: " << oVoter.getAge() << std::endl <<
            "SSN: " << oVoter.getSSN() << std::endl <<
            "Party Affiliation: " << oVoter.getPartyAffiliation();

    return os;
}

// Constructors

Voter::Voter(char* name, int age, const std::string &ssn, const std::string &partyAffiliation)
{
    setName(name);
    setAge(age);
    setSSN(ssn);
    setPartyAffiliation(partyAffiliation);
}

// Accessors and Mutators

void Voter::setPartyAffiliation(std::string partyAffiliation)
{
    m_partyAffiliation = partyAffiliation;
}

std::string Voter::getPartyAffiliation()
{
    return m_partyAffiliation;
}
