#pragma once

#include <JuceHeader.h>

class HoofFuzzUI  : public juce::Component
{
public:
    HoofFuzzUI();
    ~HoofFuzzUI() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider gainSlider;
    juce::Label gainLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HoofFuzzUI)
};
