/*
  ==============================================================================

    MainProcessor.h
    Created: 20 Jan 2023 11:16:43am
    Author:  Trever Hillis

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "BigMuff.h"
#include "FuzzFace.h"
#include "HoofFuzz.h"
#include "ProCoRat.h"

class MainProcessor
{
public:
    MainProcessor()
    {
        fuzzImplementations.push_back(std::make_unique<FuzzFace>());
        fuzzImplementations.push_back(std::make_unique<BigMuff>());
        fuzzImplementations.push_back(std::make_unique<ProCoRat>());
        fuzzImplementations.push_back(std::make_unique<HoofFuzz>());
    }

    void prepare(const juce::dsp::ProcessSpec& spec)
    {
        for (auto& fuzz : fuzzImplementations)
            fuzz->prepare(spec);
    }
    void process(const juce::dsp::ProcessContextReplacing<float>& context)
    {
        fuzzImplementations[currentFuzzType]->process(context);
    }
    void reset()
    {
        for (auto& fuzz : fuzzImplementations)
            fuzz->reset();
    }

private:
    std::vector<std::unique_ptr<juce::dsp::ProcessorBase>> fuzzImplementations;
    int currentFuzzType = 0;
};

