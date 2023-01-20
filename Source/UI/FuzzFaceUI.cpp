#include "FuzzFaceUI.h"

FuzzFaceUI::FuzzFaceUI()
{
    gainSlider.setSliderStyle (juce::Slider::Rotary);
    gainSlider.setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);
    gainSlider.setRange (0.0, 1.0);
    gainSlider.setValue (0.5);
    addAndMakeVisible (gainSlider);

    gainLabel.setText ("Gain", juce::dontSendNotification);
    gainLabel.attachToComponent (&gainSlider, juce::right);
    addAndMakeVisible (gainLabel);
}

FuzzFaceUI::~FuzzFaceUI()
{
}

void FuzzFaceUI::paint (juce::Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
}

void FuzzFaceUI::resized()
{
    auto bounds = getLocalBounds();
    bounds.reduce (10, 10);

    gainSlider.setBounds (bounds.removeFromTop (100));
}
