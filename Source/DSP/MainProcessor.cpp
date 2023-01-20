/*
  ==============================================================================

    MainProcessor.cpp
    Created: 20 Jan 2023 11:16:43am
    Author:  Trever Hillis

  ==============================================================================
*/

#include <JuceHeader.h>
#include "MainProcessor.h"

MainProcessor::MainProcessor()
{
    processors.add(fuzzFace);
    fuzzFaceUI.setFuzzFace(fuzzFace);
    processors.add(bigMuff);
    processors.add(proCoRat);
    processors.add(hoofFuzz);
}

void MainProcessor::prepare(const dsp::ProcessSpec& spec)
{
    processors.prepare(spec);
}

void MainProcessor::process(const dsp::ProcessContextReplacing<float>& context)
{
    processors.process(context);
}

void MainProcessor::reset()
{
    processors.reset();
}
