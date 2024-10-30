#include "crow.h"
#include <iostream>
#include "app.h"
#include <thread>
using namespace std;

std::atomic<int> camera_active{3};  // 全局标志变量


crow::response status(const crow::request& req) {
    int currentStatus = camera_active.load();
    crow::json::wvalue x({{"status", "unknown"}});
    if (currentStatus == 1) {
        x["status"] = "activated";
    } else if (currentStatus == 2) {
        x["status"] = "pending";
    } else {
        x["status"] = "offline";
    }
    return x;
}

crow::response initialize(const crow::request& req) {
    int currentStatus = camera_active.load();
    crow::json::wvalue x({{"message", "unknown"}});
    switch (currentStatus) {
        case 1:
            x["message"] = "activated";
            break;
        case 2:
            x["message"] = "is activating...";
            break;
        default:
            camera_active.store(2);
            std::this_thread::sleep_for(std::chrono::seconds(10));
            camera_active.store(1);
            x["message"] = "activated";
            break;
    }
    return x;
}




int main(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        cout << "param" << i << ":" << argv[i] << endl;
    }
    int port = 9977;
    if (argc >= 2) {
        port = stoi(argv[1]);
    }
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]() {
        return "crow app!";
    });

    CROW_ROUTE(app, "/init")(initialize);
    CROW_ROUTE(app, "/status")(status);

    app.port(port).multithreaded().run();
    return 0;
}