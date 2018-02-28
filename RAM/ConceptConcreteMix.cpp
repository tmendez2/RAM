#include "ConceptConcreteMix.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptConcreteMix::ConceptConcreteMix(System::String^ concreteMixGuid, System::String^ concreteMixName, double concreteMixFprimec)
	{
		guidString = concreteMixGuid;
		nameString = concreteMixName;
		fprimecDouble = concreteMixFprimec;
	}

	//PROPERTIES//
	System::String^ ConceptConcreteMix::guid::get()
	{
		return guidString;
	}
	System::String^ ConceptConcreteMix::name::get()
	{
		return nameString;
	}
	void ConceptConcreteMix::name::set(System::String^ value)
	{
		//TODO:
		//Assign the new name in RAM Concept.
		//Throw exceptions if ther assignment
		//fails, for whatever reason; invalid data, for example.
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
		//fails, for whatever reason; invalid data, for example.
		fprimecDouble = value;
	}
}