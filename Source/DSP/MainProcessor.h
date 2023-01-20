/*
  ==============================================================================

    MainProcessor.h
    Created: 20 Jan 2023 11:16:43am
    Author:  Trever Hillis

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include <juce_dsp/processors/juce_ProcessorChain.h>
#include "BigMuff.h"
#include "FuzzFace.h"
#include "HoofFuzz.h"
#include "ProCoRat.h"

class MainProcessor : public juce::dsp::ProcessorBase
{
public:
    MainProcessor()
    {
        processors.add(fuzzFace);
        processors.add(bigMuff);
        processors.add(proCoRat);
        processors.add(hoofFuzz);
    }

    void prepare (const juce::dsp::ProcessSpec& spec) override
    {
        // set up the audio processing buffer and any other variables you might need
    }

    void process (const juce::dsp::ProcessContextReplacing<float>& context) override
    {
        // switch between the different fuzz implementations here
        switch (currentFuzzType)
        {
            case FuzzType::FuzzFace:
                fuzzFace.process(context);
                break;
            case FuzzType::BigMuff:
                bigMuff.process(context);
                break;
            case FuzzType::ProCoRat:
                proCoRat.process(context);
                break;
            case FuzzType::HoofFuzz:
                hoofFuzz.process(context);
                break;
        }
    }

    void reset() override
    {
        // reset any state variables
    }

private:
    FuzzFace fuzzFace;
    BigMuff bigMuff;
    ProCoRat proCoRat;
    HoofFuzz hoofFuzz;
    FuzzType currentFuzzType = FuzzType::FuzzFace;
};
