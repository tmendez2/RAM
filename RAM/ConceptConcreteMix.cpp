#include "ConceptConcreteMix.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptConcreteMix::ConceptConcreteMix(System::String^ concreteMixName, double concreteMixFprimec) :
		nameString(concreteMixName),
		fprimecDouble(concreteMixFprimec) { }

	//PROPERTIES//
	System::String^ ConceptConcreteMix::name::get()
	{
		return nameString;
	}
	void ConceptConcreteMix::name::set(System::String^ value)
	{
		//TODO:
		//Assign the new name in RAM Concept.
		//Throw exceptions if ther assignment
		//fails, for whatever reason.
		nameString = value;
	}
	double ConceptConcreteMix::fprimec::get()
	{
		return fprimecDouble;
	}
	void ConceptConcreteMix::fprimec::set(double value)
	{
		//TODO:
		//Assign the new fprimec in RAM Concept.
		//Throw exceptions if ther assignment
		//fails, for whatever reason.
		fprimecDouble = value;
	}
}