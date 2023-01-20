#pragma once

#include <JuceHeader.h>

class FuzzFaceUI  : public juce::Component
{
public:
    FuzzFaceUI();
    ~FuzzFaceUI() override;

    void paint (juce::Graphics&) override;
    void resized() override;
    
    void setFuzzFace (FuzzFace& fuzz) { effect = &fuzz; }

private:
    FuzzFace* effect;
    juce::Slider gainSlider;
    juce::Label gainLabel;
    
    void gainChanged (juce::Value& value);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FuzzFaceUI)
};
