#pragma once

#include "IAPIFactory.h"
#include "ConceptAPI.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("2BE72373-A405-46F6-ADFD-C9629C164B21")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class APIFactory : public IAPIFactory
	{
	public:
		APIFactory();
		virtual IConceptAPI^ createConceptAPI();
		virtual property System::Collections::IEnumerable^ conceptAPIs
		{
			System::Collections::IEnumerable^ get();
		}
	};
}