﻿#pragma once
#include "GUI.hpp"
#include "../Task/DrawableTask.hpp"

class ScrollablePanel : public GUI
{
private:
    float ScrollPosition_ = 0.f;
    float BeforeChangePosition_ = 0.f;
    std::shared_ptr<Scene> Panel_;

public:
    unsigned animationColor;

    ScrollablePanel(const std::string& label, const ScreenData& layoutScreen, const ScreenData& panelScreen, std::shared_ptr<FlexibleScaler> parentScaler = nullptr);
    ~ScrollablePanel();

    void GUIUpdate(float deltaTime) override;
    void Draw() override;

    std::shared_ptr<Scene> GetPanelInstance();

    void ResetAnimation();
};