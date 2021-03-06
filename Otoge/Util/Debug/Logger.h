﻿#pragma once

class Logger
{
private:
    std::string ModuleName_;
    static int userCount;

public:
    Logger(const std::string &moduleName = "");
    ~Logger();

    void Log(const std::string &message, const std::string &tag = "LOG");

    static void LowLevelLog(const std::string &message, const std::string &tag);

    void Debug(const std::string &message);
    void Info(const std::string &message);
    void Warn(const std::string &message);
    void Error(const std::string &message);
    void Critical(const std::string &message);
};

