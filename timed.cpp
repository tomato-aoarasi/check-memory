// timed.cpp: 定义应用程序的入口点。
//
#include "timed.h"

int main(int argc, char* argv[])
{
    initialized();
    /* = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = */




    std::cout << "result:" << reloadProcessPID() << std::endl;
    std::cout << "pid:" << ::config_variable::processes_pid.at(0) << std::endl;

    std::cout << "shell脚本之前" << std::endl;

    std::cout << tools::exec("ls -l")  << std::endl;
    std::cout << "===============" << std::endl;
    std::cout << tools::exec("ls -ls") << std::endl;

    //system("kill -9 2256676");

    std::cout << "shell脚本之后" << std::endl;

    log_relevant::daily_log_record(std::format("{}", "启动成功"));
    try {
        std::cout << "===================================\n";

        //获取内存相关信息
        /*
        auto memory_info{ getMemoryStatus() };
        for (auto item : memory_info) {
            if (tools::is_match_literal(item, "MemTotal")) {
                std::cout << "总物理内存:" << tools::match_numerical(item) << "KiB" << std::endl;
            }
            else if(tools::is_match_literal(item, "MemAvailable")) {
                std::cout << "剩余物理内存:" << tools::match_numerical(item) << "KiB" << std::endl;
                break;
            }
        }

        std::cout << "===================================\n";

        std::cout << "输pid获取进程信息:";
        std::string process_id;
        std::cin >> process_id; */

        //获取进程相关信息
        /*auto process_info{getProcessStatus(process_id)};
        for (auto item : process_info) {
            //std::cout << item << std::endl;
            if (tools::is_match_literal(item, "VmRSS")) {
                std::cout << "进程已用物理内存:" << tools::match_numerical(item) << "KiB" << std::endl;
                break;
            }
        }
        std::cout << "===================================\n";*/
    }
    catch (const std::exception& e) {
        log_relevant::daily_log_record(std::format("发生严重错误:{}", e.what()), log_relevant::log_type::error);
    }





    /* = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = */
    release_resource();
    return 0;
}

std::vector<std::string> getProcessStatus(const std::string& pid) {
    std::filesystem::path p{ "/./proc/" + pid + "/status" };

    std::cout << "path is " << p << "\n";

    std::ifstream file_stream{ p };

    if (!file_stream.good() || !file_stream)
    {
        file_stream.close();
        throw FileException("Error while opening file!");
    }
    std::vector<std::string> result{};
    std::string line{};
    //file_stream >> result;

    while (std::getline(file_stream, line)) {
        result.push_back(line);
    }

    file_stream.close();
    return result;
}

std::vector<std::string> getMemoryStatus(void) {
    std::filesystem::path p{ "/./proc/meminfo" };
    std::ifstream file_stream{ p };

    if (!file_stream.good() || !file_stream)
    {
        file_stream.close();
        throw FileException("Error while opening file!");
    }
    std::vector<std::string> result{};
    std::string line{};
    //file_stream >> result;

    while (std::getline(file_stream, line)) {
        result.push_back(line);
    }

    file_stream.close();
    return result;
}