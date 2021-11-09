#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template <class Temp>
class dynArr
{
private:
Temp *data;
int size;
public:
dynArr(int);
~dynArr();
void setValue(int, Temp);
Temp getValue(int);
};
#endif // DYNARR_H_INCLUDED
