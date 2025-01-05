#include "httplib.h"

int main() {
    httplib::Server svr;

    svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("Hello, Gitpod! Your C++ server is live!", "text/plain");
    });

    std::cout << "Server is running at http://localhost:8000" << std::endl;
    svr.listen("0.0.0.0", 8000); // Bind to 0.0.0.0 for Gitpod
    return 0;
}
