﻿#pragma once
#include "../../../System/Task/Scene.hpp"
#include "../../../Util/Calculate/Screen/FlexibleScaler.hpp"
#include "../../../System/GUI/Button.hpp"

class TitleScene :
    public Scene
{
private:
	std::shared_ptr<Button> MenuOpener_;
    std::shared_ptr<Scene> MenuGroup_;
    std::shared_ptr<Button> MenuPlay_;
    std::shared_ptr<Button> MenuOption_;
    std::shared_ptr<Button> MenuClose_;

    std::shared_ptr<Scene> SettingScene_;

public:
    TitleScene();
    ~TitleScene();

    void SceneFadeIn(float deltaTime) override;
    void SceneUpdate(float deltaTime) override;
    void Draw() override;
};
