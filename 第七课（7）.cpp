//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    char currentPath[256] = "C:\\Users\\Student"; 
//    char input[256];
//
//    cout << currentPath << endl; 
//
//    while (true) {
//        cin.getline(input, 256); 
//
//        if (strcmp(input, "quit") == 0) {
//            break;
//        }
//        else if (strcmp(input, "cd .") == 0) {
//
//            cout << currentPath << endl;
//        }
//        else if (strcmp(input, "cd ..") == 0) {
//
//            size_t len = strlen(currentPath);
//            for (size_t i = len - 1; i >= 0; --i) {
//                if (currentPath[i] == '\\') {
//                    currentPath[i] = '\0'; 
//                    break;
//                }
//            }
//
//            if (strlen(currentPath) < 3) {
//                strcpy(currentPath, "C:\\");
//            }
//            cout << currentPath << endl;
//        }
//        else if (strcmp(input, "cd ") == 0 || (strlen(input) > 3 && input[0] == 'c' && input[1] == 'd' && input[2] == ' ')) {
//            char tempPath[256];
//            strcpy(tempPath, currentPath);
//            char* subPath = input + 3;
//
//            char segment[256];
//            int segmentIndex = 0;
//
//            for (int i = 0; subPath[i] != '\0'; ++i) {
//                if (subPath[i] == '\\' || subPath[i + 1] == '\0') {
//                    if (subPath[i + 1] == '\0' && subPath[i] != '\\') {
//                        segment[segmentIndex++] = subPath[i];
//                    }
//                    segment[segmentIndex] = '\0'; 
//                    segmentIndex = 0;
//
//                    if (strcmp(segment, ".") == 0) {
//                    }
//                    else if (strcmp(segment, "..") == 0) {
//
//                        size_t len = strlen(tempPath);
//                        for (size_t j = len - 1; j >= 0; --j) {
//                            if (tempPath[j] == '\\') {
//                                tempPath[j] = '\0';
//                                break;
//                            }
//                        }
//
//                        if (strlen(tempPath) < 3) {
//                            strcpy(tempPath, "C:\\");
//                        }
//                    }
//                    else {
//
//                        if (strlen(tempPath) == 3 && tempPath[1] == ':') {
//                            strcat(tempPath, segment);
//                        }
//                        else {
//                            strcat(tempPath, "\\");
//                            strcat(tempPath, segment);
//                        }
//                    }
//                }
//                else {
//                    segment[segmentIndex++] = subPath[i];
//                }
//            }
//            strcpy(currentPath, tempPath);
//            cout << currentPath << endl;
//        }
//    }
//
//    return 0;
//}

