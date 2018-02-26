#pragma once

namespace RAM
{
	interface class IConceptConcreteMixes;

	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("C34A8D4F-3088-4D77-9040-15E38B6D9387")]
	public interface class IConceptCriteria
	{
	public:
		property IConceptConcreteMixes^ concreteMixes
		{
			IConceptConcreteMixes^ get();
		}
	};
}