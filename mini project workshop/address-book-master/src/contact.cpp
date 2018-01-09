#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    -blood
    */

    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !(phoneNumber.empty()|| blood.empty))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        email.empty()
        blood.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
    
