
#include<stdio.h>
enum months
{
    jan=1,
    feb,march,april,may,jun,juiy,aug,sep,oct,nov,dec
};
void main()
{
    enum months m;
    m = nov;
    char*season;
    switch(m)
    {
        case dec:case jan:case feb:
        season="winter";
        break;
        case march: case april:case may:
        season="summer";
        break;
        case jun:case juiy:case aug:
        season="monsoon";
        break;
        case sep:case oct:case nov:
        season="spring";
        break;

    }
    printf("%d is %s",m ,season);
}