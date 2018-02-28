#pragma once

namespace RAM
{
	interface class IConceptConcreteMix;

	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("25F0E8B9-DA31-42A3-B9AF-91D68D6DDFBC")]
	public interface class IConceptConcreteMixes : public System::Collections::Generic::IEnumerable<IConceptConcreteMix^>, public System::Collections::IEnumerable
	{
	public:
		virtual System::Collections::IEnumerator^ GetEnumerator();
		virtual IConceptConcreteMix^ add(System::String^ name, double fprimec);
		virtual void remove(System::String^ guid);
		property int count
		{
			virtual int get();
		}
		property IConceptConcreteMix^ default[int]
		{
			virtual IConceptConcreteMix^ get(int index);
		}
		property IConceptConcreteMix^ default[System::String^]
		{
			virtual IConceptConcreteMix^ get(System::String^ guid);
		}
	};
}