/*
  ==============================================================================

    HoofFuzz.cpp
    Created: 20 Jan 2023 11:20:36am
    Author:  Trever Hillis

  ==============================================================================
*/

#include <JuceHeader.h>
#include "HoofFuzz.h"

//==============================================================================
HoofFuzz::HoofFuzz()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

HoofFuzz::~HoofFuzz()
{
}

void HoofFuzz::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (juce::Colours::white);
    g.setFont (14.0f);
    g.drawText ("HoofFuzz", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void HoofFuzz::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
