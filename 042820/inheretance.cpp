#include <iostream>
#include <fstream>
#include <curl/curl.h>
using namespace std;

#define file_in "weatherSummary.txt"
#define file_out "report.txt"

int main() {
    CURL *curl;
    FILE *fp;
    char *url = "https://wttr.in/savannah";
    char outfile[FILENAME_MAX] = "page.html";
    CURLcode res;
    curl = curl_easy_init();
    //ofstream in;
    //ofstream out;
    if(curl) {
        fp = fopen(outfile, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
    }
    return 0;
}
