#pragma once
#include "Tableau.h"
using namespace tab;
class TableauBorne :
    protected Tableau
{
     private:
         float max;
         float min;
    public:
        TableauBorne(float, float, int);
        float& operator[](const int ind);
        TableauBorne& operator()(const int ind,float newval);
   



};

