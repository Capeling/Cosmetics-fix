#pragma once

#include <functional>

#include <types/Account.hpp>
#include <types/Cosmetic.hpp>

#define API_URL "http://127.0.0.1:8787"

class APIManager {
public:
    static APIManager* get() {
        static APIManager instance;
        return &instance;
    }

    void getAccount(int accountID, std::function<void(Account*)> func);
    void getAllCosmetics(std::function<void(std::vector<Cosmetic*>)> func);
};