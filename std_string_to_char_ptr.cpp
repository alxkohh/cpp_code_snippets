/*
Converts a std string to char*

Why would we need to do such a conversion? Certain functions / syscalls require
char* as input.
*/

#include <bits/stdc++.h>
using namespace std;

char* toCharPtr(string s) {
    return &*s.begin();
}

int main() {
    return 0;
}
