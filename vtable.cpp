/*Class Derived derived from class Base.
 Base's pvf has an entry in this Base class vtable?NO
 Derived's pvf has an entry in this Derived class vtable?
No-Derived's vtable neither contains Base::pvf nor Derived::pvf-if not overridden. 
Yes-if pvf of base is overriden in Derived the vtable of Derived contains Derived::pvf_overidden.
*/
#include<iostream>
using namespace std;

class Base
{
public:
//	virtual void f()=0;
//	virtual void f1()=0;
	virtual void pvfInBaseOverridenInDerived()=0;//Vtable of abstract Base class contains an entry Null for pvf
	virtual void pvfInBaseNOTOverridenInDerived()=0;//Derived also should point to Base version But Base version itself no entry
	virtual void vfOverridenInDerived();
	virtual void vfNOTOverridenInDerived();//Derived also points to base version
};
class Derived:public Base
{
	virtual void pvfInBaseOverridenInDerived();
	virtual void vfOverridenInDerived();

};
int main()
{
Base *b;
//Derived d;//only if pvf overridden in derived
return 0;
}
/*
Vtable for Base
Base::_ZTV4Base: 6u entries
0     (int (*)(...))0
8     (int (*)(...))(& _ZTI4Base)
16    (int (*)(...))__cxa_pure_virtual
24    (int (*)(...))__cxa_pure_virtual
32    (int (*)(...))Base::vfOverridenInDerived
40    (int (*)(...))Base::vfNOTOverridenInDerived

Class Base
   size=8 align=8
   base size=8 base align=8
Base (0x0x7f950ac3dd80) 0 nearly-empty
    vptr=((& Base::_ZTV4Base) + 16u)

Vtable for Derived
Derived::_ZTV7Derived: 6u entries
0     (int (*)(...))0
8     (int (*)(...))(& _ZTI7Derived)
16    (int (*)(...))Derived::pvfInBaseOverridenInDerived
24    (int (*)(...))__cxa_pure_virtual
32    (int (*)(...))Derived::vfOverridenInDerived
40    (int (*)(...))Base::vfNOTOverridenInDerived

Class Derived
   size=8 align=8
   base size=8 base align=8
Derived (0x0x7f950aa942d8) 0 nearly-empty
    vptr=((& Derived::_ZTV7Derived) + 16u)
  Base (0x0x7f950ac3dde0) 0 nearly-empty
      primary-for Derived (0x0x7f950aa942d8)
*/
