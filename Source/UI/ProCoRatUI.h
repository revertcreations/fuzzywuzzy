#pragma once

#include <JuceHeader.h>

class ProCoRatUI  : public juce::Component
{
public:
    ProCoRatUI();
    ~ProCoRatUI() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider gainSlider;
    juce::Label gainLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ProCoRatUI)
};
