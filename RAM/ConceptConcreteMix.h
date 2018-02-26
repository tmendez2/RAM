#pragma once

#include "IConceptConcreteMix.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("437548E7-8260-4FEB-A7C4-ED2A4E5515EC")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptConcreteMix : public IConceptConcreteMix
	{
	public:
		virtual property System::String^ name
		{
			System::String^ get();
			void set(System::String^ value);
		}
		virtual property double fprimec
		{
			double get();
			void set(double value);
		}
	internal:
		ConceptConcreteMix(System::String^ concreteMixName, double concreteMixFprimec);
	private:
		System::String^ nameString;
		double fprimecDouble;
	};
}