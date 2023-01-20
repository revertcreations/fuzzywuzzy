/*
  ==============================================================================

    FuzzFace.h
    Created: 20 Jan 2023 11:17:15am
    Author:  Trever Hillis

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class FuzzFace : public juce::dsp::ProcessorBase
{
public:
    FuzzFace() {}

    void prepare (const juce::dsp::ProcessSpec& spec) override
    {
        // set up the audio processing buffer and any other variables you might need
    }

    void process (const juce::dsp::ProcessContextReplacing<float>& context) override
    {
        // implement the Fuzz Face algorithm using JUCE's audio processing functions
    }

    void reset() override
    {
        // reset any state variables
    }

private:
    // any other member variables you might need
};
