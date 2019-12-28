/*
  ==============================================================================

    MDAP_Control_Subpanel.cpp
    Created: 30 Sep 2019 3:29:33pm
    Author:  Silver

  ==============================================================================
*/

#include "MDAP_Control_Subpanel.h"

MDAPSubpanel::MDAPSubpanel()
{
    setSize(CONTROL_PANEL_WIDTH, CONTROL_PANEL_HEIGHT);
    
    int yPos = 0;
    setText(listenerPosTitle, 20, 0, yPos, CONTROL_PANEL_WIDTH, "Listener Position");
    yPos += 25;
    setInput(20, yPos);
    
    yPos += 25;
    setText(speakerPosTitle, 20, 0, yPos, CONTROL_PANEL_WIDTH, "Speakers Position");
    yPos += 25;
    setInput(20, yPos);
    yPos += 25;
    setInput(20, yPos);
    yPos += 25;
    setInput(20, yPos);
    yPos += 25;
    setInput(20, yPos);
    
    yPos += 25;
    setText(sourcePosTitle, 20, 0, yPos, CONTROL_PANEL_WIDTH, "Sound Source Position");
    yPos += 20;
    setInput(20, yPos);
}

MDAPSubpanel::~MDAPSubpanel()
{
    mXYLabels.clear();
    mPosLabels.clear();
}

void MDAPSubpanel::paint(Graphics& g)
{
    g.setColour(Colours::whitesmoke);
    g.fillAll();
    g.setColour(Colours::black);
    g.drawRect(0,
               0,
               CONTROL_PANEL_WIDTH,
               CONTROL_PANEL_HEIGHT,
               2);

    int lineDistance = 25 * 2;
    drawLine(g, lineDistance);
    lineDistance += 25 * 5;
    drawLine(g, lineDistance);
    lineDistance += 25 * 2;
    drawLine(g, lineDistance);
}
