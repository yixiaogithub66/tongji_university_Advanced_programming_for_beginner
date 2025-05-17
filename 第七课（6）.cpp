//#define _CRT_SECURE_NO_WARNINGS
//#define max_len 200
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct beak_up {
//    char type[10]; 
//    char content[max_len];
//};
//
//void classify(const char* s, beak_up storage[], int* storage_count) {
//    *storage_count = 0;
//    size_t len = strlen(s);
//    size_t i = 0;
//
//    while (i < len) {
//        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '\'' || s[i] == '-') {
//            strcpy(storage[*storage_count].type, "word");
//            size_t j = i;
//            while (j < len && ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9') || s[j] == '\'' || s[j] == '-')) {
//                j++;
//            }
//            size_t copy_len = j - i;
//            for (size_t k = 0; k < copy_len; k++) {
//                storage[*storage_count].content[k] = s[i + k];
//            }
//            storage[*storage_count].content[copy_len] = '\0';
//            (*storage_count)++;
//            i = j;
//        }
//        else {
//            strcpy(storage[*storage_count].type, "non-word");
//            size_t j = i;
//            while (j < len &&
//                !((s[j] >= 'a' && s[j] <= 'z') ||
//                    (s[j] >= 'A' && s[j] <= 'Z') ||
//                    (s[j] >= '0' && s[j] <= '9') ||
//                    s[j] == '\'' || s[j] == '-')) {
//                j++;
//            }
//            size_t copy_len = j - i;
//            for (size_t k = 0; k < copy_len; k++) {
//                storage[*storage_count].content[k] = s[i + k];
//            }
//            storage[*storage_count].content[copy_len] = '\0'; 
//            (*storage_count)++;
//            i = j;
//        }
//    }
//}
//
//
//bool token_equal(const beak_up& a, const beak_up& b) {
//    return strcmp(a.type, b.type) == 0 && strcmp(a.content, b.content) == 0;
//}
//
//void process_repeat(beak_up storage[], int* storage_count) {
//    bool changed = true;
//    while (changed) {
//        changed = false;
//        beak_up new_storage[max_len];
//        int new_storage_count = 0;
//
//        for (int i = 0; i < *storage_count; ) {
//            if (i <= *storage_count - 3 &&
//                strcmp(storage[i].type, "word") == 0 &&
//                strcmp(storage[i + 1].type, "non-word") == 0 && strcmp(storage[i + 1].content, " ") == 0 &&
//                strcmp(storage[i + 2].type, "word") == 0 &&
//                strcmp(storage[i].content, storage[i + 2].content) == 0) {
//                strcpy(new_storage[new_storage_count].type, storage[i].type);
//                strcpy(new_storage[new_storage_count].content, storage[i].content);
//                new_storage_count++;
//                i += 3;
//                changed = true;
//            }
//            else {
//                strcpy(new_storage[new_storage_count].type, storage[i].type);
//                strcpy(new_storage[new_storage_count].content, storage[i].content);
//                new_storage_count++;
//                i++;
//            }
//        }
//
//        for (int i = 0; i < new_storage_count; i++) {
//            strcpy(storage[i].type, new_storage[i].type);
//            strcpy(storage[i].content, new_storage[i].content);
//        }
//        *storage_count = new_storage_count;
//    }
//}
//
//void output(beak_up storage[], int storage_count, char* result) {
//    result[0] = '\0';
//    for (int i = 0; i < storage_count; i++) {
//        strncat(result, storage[i].content, max_len - strlen(result) - 1);
//    }
//}
//
//int main() {
//    char input[max_len];
//    cin.getline(input, max_len);
//    beak_up storage[max_len];
//    int storage_count;
//    classify(input, storage, &storage_count);
//
//    process_repeat(storage, &storage_count);
//
//    char result[max_len];
//    output(storage, storage_count, result);
//
//    cout << result << endl;
//
//    return 0;
//}