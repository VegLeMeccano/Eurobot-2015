#include "AsservPosition.h"
#include "../Util/Util.h"


AsservPosition::AsservPosition():  VCons(0), VRotCons(0), compteurFinAsserv(0), signeMarche(1)
{
}

double AsservPosition::moduloCap(double err)
{
    return Util::mod(err, -180., 180.);
}

double AsservPosition::getVCons() const
{
    return VCons;
}

double AsservPosition::getVRotCons() const
{
    return VRotCons;
}

bool AsservPosition::getMarcheAvant() const
{
    return signeMarche == 1;
}

bool AsservPosition::getMarcheArriere() const
{
    return signeMarche == -1;
}

bool AsservPosition::getArretFinal() const
{
    return arretFinal;
}
