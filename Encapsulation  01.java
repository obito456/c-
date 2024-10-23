#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Gmail {
private:
    string username;
    string password;
    string otp;

public:
    Gmail(string username, string password) {
        this->username = username;
        this->password = password;
    }

    void setUsername(string user) {
        if (verifyOTP()) {
            this->username = user;
            cout << "Username updated successfully!" << endl;
        } else {
            cout << "OTP verification failed. Username not updated." << endl;
        }
    }

    void setPassword(string pass) {
        if (verifyOTP()) {
            this->password = pass;
            cout << "Password updated successfully!" << endl;
        } else {
            cout << "OTP verification failed. Password not updated." << endl;
        }
    }

    string getUsername() {
        if (verifyOTP()) {
            return username;
        } else {
            cout << "OTP verification failed. Cannot retrieve username." << endl;
            return "";
        }
    }

    string getPassword() {
        if (verifyOTP()) {
            return password;
        } else {
            cout << "OTP verification failed. Cannot retrieve password." << endl;
            return "";
        }
    }

    string generateOTP() {
        srand(time(0));
        int otpValue = 1000 + rand() % 9000;
        otp = to_string(otpValue);
        cout << "Generated OTP: " << otp << endl;
        return otp;
    }

private:
    bool verifyOTP() {
        string inputOtp;
        cout << "Enter OTP: ";
        cin >> inputOtp;
        return otp == inputOtp;
    }
};

int main() {
    Gmail gmail("vijay", "vijay123");
    
    gmail.generateOTP();
    cout << "Retrieved password: " << gmail.getPassword() << endl;
    gmail.setPassword("Vijayo161733$");
    cout << "Updated password: " << gmail.getPassword() << endl;

    return 0;
}
