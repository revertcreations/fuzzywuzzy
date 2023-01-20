#pragma once

#include <JuceHeader.h>

class BigMuffUI  : public juce::Component
{
public:
    BigMuffUI();
    ~BigMuffUI() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider gainSlider;
    juce::Label gainLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BigMuffUI)
};
