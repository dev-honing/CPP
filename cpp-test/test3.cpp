#include <iostream>
#include <string>
#include <vector>
#include <fstream>

// 주소록 항목을 표현하는 구조체
struct Contact {
    std::string name;
    std::string phone;
    std::string email;
};

// 주소록 관리 클래스
class ContactAdmin {
private:
    std::vector<Contact> contacts; // 주소록 항목을 저장할 벡터
    std::string filename; // 주소록 파일명

public:
    // 생성자
    ContactAdmin(std::string fname) : filename(fname) {
        readContacts(); // 주소록 파일을 읽기
    }

    // 주소록 추가
    void addContact(const Contact& contact) {
        contacts.push_back(contact); // 벡터에 연락처 추가
        saveContacts(); // 주소록을 파일로 저장
    }

    // 주소록 편집
    void editContact(int index, const Contact& newContact) {
        if (index >= 0 && index < contacts.size()) {
            contacts[index] = newContact; // 벡터에서 해당 인덱스의 연락처 수정
            saveContacts(); // 주소록을 파일로 저장
        }
    }

    // 주소록 삭제
    void deleteContact(int index) {
        if (index >= 0 && index < contacts.size()) {
            contacts.erase(contacts.begin() + index); // 벡터에서 해당 인덱스의 연락처 삭제
            saveContacts(); // 주소록을 파일로 저장
        }
    }

    // 주소록 조회
    void readContacts() {
        std::ifstream file(filename);
        if (file.is_open()) {
            contacts.clear(); // 기존 주소록 내용 삭제
            Contact contact;
            while (getline(file, contact.name)) {
                getline(file, contact.phone);
                getline(file, contact.email);
                contacts.push_back(contact);
            }
            file.close();

            // 읽은 주소록을 화면에 출력
            displayContacts();
        }
    }

    // 주소록 저장
    void saveContacts() {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& contact : contacts) {
                file << contact.name << std::endl;
                file << contact.phone << std::endl;
                file << contact.email << std::endl;
            }
            file.close();
        }
    }

    // 화면 UI 출력
    void displayUI() {
        std::cout << "=== 주소록 ===" << std::endl;
        for (int i = 0; i < contacts.size(); ++i) {
            std::cout << i + 1 << "." << contacts[i].name << " | " << contacts[i].phone << " | " << contacts[i].email << std::endl;
        }
        std::cout << "========================================" << std::endl;
        std::cout << "1. 주소록 추가" << std::endl;
        std::cout << "2. 주소록 편집" << std::endl;
        std::cout << "3. 주소록 삭제" << std::endl;
        std::cout << "4. 주소록 조회" << std::endl;
        std::cout << "0. 프로그램 종료" << std::endl;
    }

private:
    // 주소록 정보 출력
    void displayContacts() {
        std::cout << "=== 전체 주소록 ===" << std::endl;
        for (const auto& contact : contacts) {
            std::cout << "이름: " << contact.name << std::endl;
            std::cout << "전화번호: " << contact.phone << std::endl;
            std::cout << "이메일: " << contact.email << std::endl;
            std::cout << "---------------------" << std::endl;
        }
    }
};

int main(void) {
    std::string filename = "contacts.txt"; // 주소록 파일명 설정
    ContactAdmin contact(filename); // 주소록 객체 생성 및 파일명 전달

    int choice;
    do {
        contact.displayUI(); // 화면 UI 출력
        std::cout << "이용할 기능을 선택하시오: ";
        std::cin >> choice;
        std::cin.ignore(); // 입력 버퍼 비우기

        switch (choice) {
        case 1: {
            // 주소록 추가 기능
            Contact newContact;
            std::cout << "이름: ";
            getline(std::cin, newContact.name);

            std::cout << "전화번호: ";
            getline(std::cin, newContact.phone);

            std::cout << "이메일: ";
            getline(std::cin, newContact.email);

            contact.addContact(newContact);
            break;
        }
        case 2: {
            // 주소록 편집 기능
            int index;
            std::cout << "편집할 연락처의 번호를 선택하세요: ";
            std::cin >> index;
            std::cin.ignore(); // 입력 버퍼 비우기
            Contact newContact;
            std::cout << "이름: ";
            getline(std::cin, newContact.name);

            std::cout << "전화번호: ";
            getline(std::cin, newContact.phone);

            std::cout << "이메일: ";
            getline(std::cin, newContact.email);

            contact.editContact(index - 1, newContact); // 인덱스는 1부터 시작하므로 -1 해줌
            break;
        }
        case 3: {
            // 주소록 삭제 기능
            int index;
            std::cout << "삭제할 연락처의 번호를 선택하세요: ";
            std::cin >> index;
            std::cin.ignore(); // 입력 버퍼 비우기

            contact.deleteContact(index - 1); // 인덱스는 1부터 시작하므로 -1 해줌
            break;
        }
        case 4: {
            // 주소록 조회 기능
            contact.readContacts();
            break;
        }
        case 0: {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        }
        }
    } while (choice != 0);

    return 0;
}
