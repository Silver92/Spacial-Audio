/*
  ==============================================================================

    Control_Panel.h
    Created: 30 Sep 2019 3:12:08pm
    Author:  Silver

  ==============================================================================
*/

#pragma once

#include "Panel_Base.h"
#include "VBAP_Control_Subpanel.h"


class ControlPanel
: public PanelBase
{
public:
    ControlPanel();
    ~ControlPanel();
    
    std::unique_ptr<VBAPSubpanel> mVBAPPanel;
private:
    
};
